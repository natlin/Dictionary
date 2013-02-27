#include <iostream>
#include <string>
#include "sentence.h"

using namespace std;

Sentence::Sentence (string s) : base(s)
{
}//Sentence

void Sentence::complete(const Dict &d)
{
  temp = d.getsentence();
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
}//complete

void Sentence::check(const Dict &d)
{
  temp = d.getsentence();
}//check

void Sentence::show() const
{
  cout << "SENTENCE completion for: " << base << endl;
  cout << "------------------------------" << endl;

  for(int i = 0; i < static_cast<int>(vcomplete.size()); i++)
    cout << vcomplete[i] << endl;

  cout << "SENTENCE correction for: " << base << endl;
  cout << "------------------------------" << endl;
}//show
