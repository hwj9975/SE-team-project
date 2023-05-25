#ifndef VIEW_EMPLOY_INFO_UI_H
#define VIEW_EMPLOY_INFO_UI_H

#include "ViewEmployInfo.h"
#include <string>

using namespace std;

class ViewEmployInfoUI
{
public:
    void RequestEmployInfo(ViewEmployInfo* viewEmployInfo);
    string ShowEmployInfo(string position, int applicantsNum, string finishDate);
};

#endif
