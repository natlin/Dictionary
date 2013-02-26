#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "dict.h"

using namespace std;

Dict::Dict(string f)
{
  ifstream file(f.c_str());
}//Dict(string f)
