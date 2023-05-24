#include <iostream>
#include <vector>

#include "EmployInfo.h"

using namespace std;

class EmployCollection : public EmployInfo
{
private:
    vector<pair<string, EmployInfo>> ownedEmployList;

public:
    bool getEmployStats();
};