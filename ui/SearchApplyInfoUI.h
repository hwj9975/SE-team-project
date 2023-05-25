#pragma once
#include <iostream>
#include <vector>
#include "SearchApplyInfoControl.h"
#include "ApplyInfoCollection.h"

using namespace std;

class SearchApplyInfoUI
{
private:
    SearchApplyInfoControl searchApplyInfoControl;

public:
    SearchApplyInfoUI(ApplyInfoCollection* applyInfoCollection);
    vector<string> searchApplyInfo();
};
