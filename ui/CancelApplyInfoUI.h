#include <iostream>
#include "CancelApplyInfoControl.h"

using namespace std;

class CancelApplyInfoUI
{
private:
    CancelApplyInfoControl cancelApplyInfoControl;
public:
    CancelApplyInfoUI(ApplyInfoCollection* applyInfoCollection);
    string cancelApplyInfoUI(string companyName);
};
