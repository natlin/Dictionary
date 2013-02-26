#include <iostream>
#include <string>
#include "word.h"

using namespace std;

Word::Word(string s) : base(s)
{
}

void Word::complete(const Dict &d)
{
  cout << "WORD completion for: " << base << endl;
  cout << "------------------------------" << endl;
}

void Word::check(const Dict &d)
{
  cout << "WORD correction for: " << base << endl;
  cout << "------------------------------" << endl;
}

void Word::show() const
{
  
}
