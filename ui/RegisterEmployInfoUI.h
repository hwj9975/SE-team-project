#ifndef REGISTER_EMPLOY_INFO_UI_H
#define REGISTER_EMPLOY_INFO_UI_H

#include "RegisterEmployInfo.h"
#include <string>
using namespace std;


/*
Class: RegisterEmployInfoUI
Description: 채용정보등록 바운더리 클래스이다.
*/
class RegisterEmployInfoUI
{
public:
    string createNewEmployInfo(string input, RegisterEmployInfo* RegisterEmployInfo);

    string ShowRegistrationCompleteMessage(string position, int applicantsNum, string finishDate);
};

#endif
