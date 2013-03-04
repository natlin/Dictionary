#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>
#include <fstream>
#include <cstring>
#include "dict.h"

using namespace std;

Dict::Dict(string f)
{
  ifstream fin(f.c_str());
  if(fin.is_open())
  {
    //cout << "File opened" << endl;
    string str, token, temp;
    stringstream iss;
    int length, i = 0;
    while(getline(fin, str))
    {
      iss << str;
      while(getline(iss, token, ' '))
      {
        word.push_back(token);
        //cout << word[i] << endl;
        i++;
      }//while
      /*for(set<string>::iterator count = sword.begin(); count
          != sword.end(); count++)
      {
        cout << (*count) << endl;
      }//for*/
      iss.clear();
    }//while
    for(int remove = i; remove > 0; remove--)
    {
      temp = word[i - remove];
      for(int add = 1; add < 5; add++)
      {
        if(temp[temp.length() - 1] == '.')
          break;
        temp = temp + " " + word[(i - remove) + add];
        if(temp[temp.length() - 1] == '.')
        {
          temp.erase(temp.length() - 1);
          phrase.push_back(temp);
          break;
        }//if
        phrase.push_back(temp);
      }//for
    }//for
    for(int clear = 0; clear < i; clear++)
    {
      length = word[clear].length() - 1;
      if(word[clear][length] == '.')
        word[clear].erase(length);
    }//for
    copy(word.begin(), word.end(), inserter(sword, sword.end()));
    //cout << sword.size() << endl;
    copy(phrase.begin(), phrase.end(), inserter(sphrase, sphrase.end()));
    //cout << sphrase.size() << endl;
    fin.clear();
    fin.seekg(0);
    int enter, j = 0;
    while(getline(fin, str, '.'))
    {
      sentence.push_back(str);
      //while((enter = sentence[j].find('\n'))
      //      && enter != static_cast<int>(string::npos))
      do
      {
        enter = sentence[j].find('\n');
        if(enter != static_cast<int>(string::npos))
          sentence[j].replace(enter, 1, " ");
      }while (enter != static_cast<int>(string::npos));//while
      if(sentence[j][0] == ' ')
        sentence[j].replace(0, 1, "");
      //cout << sentence[j] << endl;
      sentence[j].append(".");
      if(sentence[j][0] == '.')
        sentence[j] = sentence[0];
      j++;
    }//while
    copy(sentence.begin(), sentence.end(),
          inserter(ssentence, ssentence.end()));
    //cout << ssentence.size() << endl;
  }//if
  else
  {
    cout << "File could not be opened." << endl;
    exit(1);
  }//else
  fin.close();
}//Dict(string f)

set<string> Dict::getword() const
{
  return sword;
}//getword

set<string> Dict::getphrase() const
{
  return sphrase;
}//getphrase

set<string> Dict::getsentence() const
{
  return ssentence;
}//getsentence

Dict:: ~Dict(){
	};
