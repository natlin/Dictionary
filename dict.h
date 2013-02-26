#ifndef DICT_H
  #define DICT_H

#include <string>
#include <vector>
#include <set>
using namespace std;

class Dict
{
  public:
    Dict(string f);
  private:
    vector<string> word;
    vector<string> phrase;
    vector<string> sentence;
    set<string> sword;
    set<string> sphrase;
    set<string> ssentence;
};//Dict

#endif
