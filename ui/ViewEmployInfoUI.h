#ifndef VIEW_EMPLOY_INFO_UI_H
#define VIEW_EMPLOY_INFO_UI_H

#include "ViewEmployInfo.h"
#include <string>

using namespace std;

/*
Class: ViewEmployInfoUI
Description: 채용정보조회 바운더리 클래스이다.
*/
class ViewEmployInfoUI
{
public:
    void requestEmployInfo(ViewEmployInfo* viewEmployInfo);
    string showEmployInfo(string position, int applicantsNum, string finishDate);
};

#endif
