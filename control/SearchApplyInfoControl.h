#pragma once
#include <iostream>
#include "ApplyInfoCollection.h"

using namespace std;

class SearchApplyInfoControl
{
private:
    ApplyInfoCollection* applyInfoCollection;

public:
    SearchApplyInfoControl(ApplyInfoCollection* applyInfoCollection) {
        this->applyInfoCollection = applyInfoCollection;
    }
    vector<ApplyInfo> showApplyInfo() {
        return applyInfoCollection->getApplyInfo();
    }
};
