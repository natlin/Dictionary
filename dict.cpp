#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "dict.h"

Dict::Dict(string f)
{
  ifstream file(f);
}//Dict(string f)
