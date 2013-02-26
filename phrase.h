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
};//Phrase

#endif
