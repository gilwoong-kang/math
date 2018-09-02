#ifndef __PROPVAR_H__
#define __PROPVAR_H__

#include <string>
#include <vector>
using namespace std;

class PropVar
{
public:
  PropVar(const string &name);

public:
  string name;
  vector<bool> rows;
};

#endif
