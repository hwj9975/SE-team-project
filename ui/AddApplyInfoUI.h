#ifndef ADDAPPLYINFOUI_H
#define ADDAPPLYINFOUI_H

#include "AddApplyInfoControl.h"
using namespace std;

class AddApplyInfoUI
{
private:
    AddApplyInfoControl addApplyInfoControl;
public:
    AddApplyInfoUI(ApplyInfoCollection* applyInfoCollection);
    string addApplyInfo(std::string businessNum);
};

#endif
