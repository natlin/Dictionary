#include <iostream>
#include <string>
#include "phrase.h"

using namespace std;

Phrase::Phrase(string s) : base(s)
{
}//Phrase

void Phrase::complete(const Dict &d)
{
  temp = d.getphrase();
  set<string>::iterator it;
  for(it = temp.begin(); it != temp.end(); it++)
  {
    compare = (*it);
    for(int i = 0; i < static_cast<int>(base.length()); i++)
    {
      if(compare[i] == base[i])
      {
        if(i == (base.length() - 1))
          vcomplete.push_back(compare);
      }
      else
        break;
    }//for
  }//for
  string swap;
  for(int i = 0; i < static_cast<int>(vcomplete.size()); i++)
  {
    for(int j = i; j < static_cast<int>(vcomplete.size()); j++)
    {
      if(vcomplete[i].length() > vcomplete[j].length())
      {
        swap = vcomplete[i];
        vcomplete[i] = vcomplete[j];
        vcomplete[j] = swap;
      }//if
      if(vcomplete[i].length() == vcomplete[j].length())
      {
        if(vcomplete[i] > vcomplete[j])
        {
          swap = vcomplete[i];
          vcomplete[i] = vcomplete[j];
          vcomplete[j] = swap;
        }//if
      }//if
    }//for
  }//for
}//complete

void Phrase::check(const Dict &d)
{
  temp = d.getphrase();
}//check

void Phrase::show() const
{
  cout << "PHRASE completion for: " << base << endl;
  cout << "------------------------------" << endl;

  for(int i = 0; i < static_cast<int>(vcomplete.size()) && i < 10; i++)
    cout << vcomplete[i] << endl;

  cout << "\n" << "PHRASE correction for: " << base << endl;
  cout << "------------------------------" << endl;
}//show
