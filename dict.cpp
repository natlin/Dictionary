#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
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
    string str, token;
    stringstream iss;
    int length, i = 0;
    while(getline(fin, str))
    {
      iss << str;
      while(getline(iss, token, ' '))
      {
        word.push_back(token);
        length = word[i].length() - 1;
        if(word[i][length] == '.')
          word[i].erase(length);
        //cout << word[i] << endl;
        i++;
      }//while
      iss.clear();
    }//while
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
      j++;
    }//while
    fin.clear();
    fin.seekg(0);
    cout << "WORD" << i << endl;
    cout << "SENTENCE" << j << endl;
  }//if
  else
  {
    cout << "File could not be opened." << endl;
    exit(1);
  }//else
}//Dict(string f)
