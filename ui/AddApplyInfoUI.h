#ifndef ADDAPPLYINFOUI_H
#define ADDAPPLYINFOUI_H

#include <AddApplyInfoControl.h>

class AddApplyInfoUI
{
private:
    AddApplyInfoControl addApplyInfoControl;
public:
    AddApplyInfoUI(ApplyInfoCollection* applyInfoCollection);
    void addApplyInfo(std::string businessNum);
};

#endif
