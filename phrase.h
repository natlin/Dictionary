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
    set<string> temp;
    string compare;
    vector<string> vcomplete;
    vector<string> vcheck;
};//Phrase

#endif
