#ifndef ADDAPPLYINFOCONTROL_H
#define ADDAPPLYINFOCONTROL_H

#include <ApplyInfoCollection.h>

class AddApplyInfoControl
{
private:
    ApplyInfoCollection* applyInfoCollection;
public:
    AddApplyInfoControl(ApplyInfoCollection* applyInfoCollection) {
        this->applyInfoCollection = applyInfoCollection;
    }
    void addEmployInfo(ApplyInfo* applyInfo) {
        applyInfoCollection->addApplyInfo(applyInfo);
    }
};

#endif