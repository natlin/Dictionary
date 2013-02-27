#include <iostream>
#include <string>
#include "word.h"

using namespace std;

Word::Word(string s) : base(s)
{
}//Word

void Word::complete(const Dict &d)
{
  temp = d.getword();
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

void Word::check(const Dict &d)
{
  temp = d.getword();
}//check

void Word::show() const
{
  cout << "WORD completion for: " << base << endl;
  cout << "------------------------------" << endl;

  for(int i = 0; i < static_cast<int>(vcomplete.size()); i++)
    cout << vcomplete[i] << endl;

  cout << "\n" << "WORD correction for: " << base << endl;
  cout << "------------------------------" << endl;
}//show
