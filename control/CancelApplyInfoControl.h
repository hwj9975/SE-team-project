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
    bool cancelApplyInfo(string businessNum) {
        applyInfoCollection->deleteCancelApplyInfo(businessNum);
    }
};
