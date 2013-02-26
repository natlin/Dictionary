#ifndef DICT_H
  #define DICT_H

#include <string>
#include <vector>
using namespace std;

class Dict
{
  public:
    Dict(string f);
  private:
    vector<string> word;
    vector<string> phrase;
    vector<string> sentence;
};//Dict

#endif
