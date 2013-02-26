#include <iostream>
#include <string>
#include "phrase.h"

using namespace std;

Phrase::Phrase(string s) : base(s)
{
}

void Phrase::complete(const Dict &d)
{
  cout << "PHRASE completion for: " << base << endl;
  cout << "------------------------------" << endl;
}

void Phrase::check(const Dict &d)
{
  cout << "PHRASE correction for: " << base << endl;
  cout << "------------------------------" << endl;
}

void Phrase::show() const
{
}

