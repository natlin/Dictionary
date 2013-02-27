#ifndef WORD_H
  #define WORD_H

#include "element.h"

class Word : public Element
{
  public:
    Word(string s);
    void complete(const Dict &d);
    void check(const Dict &d);
    void show() const;
  private:
    string base;
    string compare;
    set<string> temp;
    vector<string> vcomplete;
    vector<string> vcheck;
};//Word

#endif
