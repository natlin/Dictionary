#ifndef SENTENCE_H
  #define SENTENCE_H

class Sentence : public Element
{
  public:
    void complete(const Dict &d);
    void check(const Dict &d);
    void show() const;
  private:
};//Sentence

#endif
