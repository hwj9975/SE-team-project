#pragma once
#include <iostream>
#include "ApplyInfoCollection.h"

using namespace std;

class CancelApplyInfoControl
{
private:
    ApplyInfoCollection* applyInfoCollection;
public:
    CancelApplyInfoControl(ApplyInfoCollection* applyInfoCollection) {
        this->applyInfoCollection;
    }
    void cancelApplyInfo(string businessNum) {
        applyInfoCollection->deleteCancelApplyInfo(businessNum);
    }
};
