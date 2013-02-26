#include <iostream>
#include <string>
#include "sentence.h"

using namespace std;

Sentence::Sentence (string s) : base(s)
{
}

void Sentence::complete(const Dict &d)
{
  cout << "SENTENCE completion for: " << base << endl;
  cout << "------------------------------" << endl;
}

void Sentence::check(const Dict &d)
{
  cout << "SENTENCE correction for: " << base << endl;
  cout << "------------------------------" << endl;
}

void Sentence::show() const
{
}

