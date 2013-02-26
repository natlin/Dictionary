#ifndef PHRASE_H
  #define PHRASE_H

class Phrase : public Element
{
  public:
    void complete(const Dict &d);
    void check(const Dict &d);
    void show() const;
  private:
};//Phrase

#endif
