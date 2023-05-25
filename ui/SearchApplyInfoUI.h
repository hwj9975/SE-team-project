#pragma once
#include <iostream>
#include <vector>
#include "SearchApplyInfoControl.h"
#include "ApplyInfoCollection.h"

using namespace std;

class SearchApplyInfoUI
{
private:
    SearchApplyInfoControl* searchApplyInfoControl;

public:
    SearchApplyInfoUI(SearchApplyInfoControl* searchApplyInfoControl);
    vector<string> searchApplyInfo();
};
