#include <iostream>
#include <string>
#include "word.h"

using namespace std;

Word::Word(string s) : base(s)
{
}//Word

void Word::complete(const Dict &d)
{
  temp = d.getword();
  set<string>::iterator it;
  for(it = temp.begin(); it != temp.end(); it++)
  {
    compare = (*it);
    for(int i = 0; i < static_cast<int>(base.length()); i++)
    {
      if(compare[i] == base[i])
      {
        if(i == static_cast<int>(base.length() - 1))
          vcomplete.push_back(compare);
      }
      else
        break;
    }//for
  }//for
  string swap;
  for(int i = 0; i < static_cast<int>(vcomplete.size()); i++)
  {
    for(int j = i; j < static_cast<int>(vcomplete.size()); j++)
    {
      if(vcomplete[i].length() > vcomplete[j].length())
      {
        swap = vcomplete[i];
        vcomplete[i] = vcomplete[j];
        vcomplete[j] = swap;
      }//if
      if(vcomplete[i].length() == vcomplete[j].length())
      {
        if(vcomplete[i] > vcomplete[j])
        {
          swap = vcomplete[i];
          vcomplete[i] = vcomplete[j];
          vcomplete[j] = swap;
        }//if
      }//if
    }//for
  }//for
}//complete

void Word::check(const Dict &d)
{
  temp = d.getword();
  int testing = 0;
  set<string>::iterator it;
  for(it = temp.begin(); it != temp.end(); it++)
  {
    vcheck.push_back(*it);
    compare = vcheck[testing];
    basecheck = base;
    if(compare.length() > basecheck.length())
      while(compare.length() > basecheck.length())
        basecheck.append("@");
    else if(basecheck.length() > compare.length())
      while(basecheck.length() > compare.length())
        compare.append("@");
    count = 0;
    for(int i = 0; i < static_cast<int>(basecheck.length()); i++)
    {
      if(basecheck[i] != compare[i])
        count++;
    }//for
    hamming.push_back(count);
    pair<int, string> p1(hamming[testing], vcheck[testing]);
    checksort.insert(p1);
    testing++;
  }//for
  /*int holder;
  string swap;
  for(int i = 0; i < static_cast<int>(hamming.size()); i++)
  {
    for(int j = i; j < static_cast<int>(hamming.size()); j++)
    {
      if(hamming[i] > hamming[j])
      {
        holder = hamming[i];
        swap = vcheck[i];
        hamming[i] = hamming[j];
        vcheck[i] = vcheck[j];
        hamming[j] = holder;
        vcheck[j] = swap;
      }//if
    }//for
  }//for
  for(int i = 0; i < static_cast<int>(hamming.size()); i++)
  {
    for(int j = i; j < static_cast<int>(hamming.size()); j++)
    {
      if(hamming[i] == hamming[j])
      {
        if(vcheck[i] > vcheck[j])
        {
          swap = vcheck[i];
          vcheck[i] = vcheck[j];
          vcheck[j] = swap;
        }//if
      }//if
    }//for
  }//for*/
}//check

void Word::show() const
{
  cout << "WORD completion for: " << base << endl;
  cout << "------------------------------" << endl;

  for(int i = 0; i < static_cast<int>(vcomplete.size()) && i < 10; i++)
    cout << vcomplete[i] << endl;
  cout << endl;

  cout << "WORD correction for: " << base << endl;
  cout << "------------------------------" << endl;
  int i = 0;
  pair<int, string> p1;
  set<pair<int,string> >::iterator it;
  for(it = checksort.begin(); it != checksort.end() && i < 10; it++)
  {
    p1 = *it;
    cout << p1.second << endl;
    i++;
  }//for
  /*for(int i = 0; i < static_cast<int>(vcheck.size()) && i < 10; i++)
    cout << vcheck[i] << endl;*/
  cout << endl;
}//show

Word:: ~Word() {
	};
