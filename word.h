#ifndef WORD_H
  #define WORD_H

class Word : public Element
{
  public:
    void complete(const Dict &d);
    void check(const Dict &d);
    void show() const;
  private:
};//Word

#endif
