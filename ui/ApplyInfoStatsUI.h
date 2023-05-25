#include <iostream>
#include <vector>
#include "ApplyInfoStatsControl.h"

using namespace std;

class ApplyInfoStatsUI
{
private:
    ApplyInfoStatsControl applyInfoStatsControl;
public:
    ApplyInfoStatsUI(EmployInfoCollection* employInfoCollection, ApplyInfoCollection* applyInfoCollection);
    vector<string> selectApplyInfoStats();
};
