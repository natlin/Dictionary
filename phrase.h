#ifndef PHRASE_H
  #define PHRASE_H

#include "element.h"

class Phrase : public Element
{
  public:
    Phrase(string s);
    void complete(const Dict &d);
    void check(const Dict &d);
    void show() const;
  private:
    string base;
    string basecheck;
    string compare;
    set<string> temp;
    vector<string> vcomplete;
    vector<string> vcheck;
    vector<int> hamming;
    int count;
};//Phrase

#endif
