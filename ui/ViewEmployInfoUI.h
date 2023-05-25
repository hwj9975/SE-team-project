#ifndef VIEW_EMPLOY_INFO_UI_H
#define VIEW_EMPLOY_INFO_UI_H

#include "ViewEmployInfo.h"
#include <string>

using namespace std;

class ViewEmployInfoUI
{
public:
    void requestEmployInfo(ViewEmployInfo* viewEmployInfo);
    string showEmployInfo(string position, int applicantsNum, string finishDate);
};

#endif
