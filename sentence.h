#ifndef SENTENCE_H
  #define SENTENCE_H

#include "element.h"

class Sentence : public Element
{
  public:
    Sentence(string s);
    void complete(const Dict &d);
    void check(const Dict &d);
    void show() const;
  private:
    string base;
};//Sentence

#endif
