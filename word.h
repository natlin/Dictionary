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
};//Word

#endif
