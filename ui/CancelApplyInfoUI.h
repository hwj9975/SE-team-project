#include <iostream>
#include "CancelApplyInfoControl.h"

using namespace std;

class CancelApplyInfoUI
{
private:
    CancelApplyInfoControl* cancelApplyInfoControl;
public:
    CancelApplyInfoUI(CancelApplyInfoControl* cancelApplyInfoControl);
    string cancelApplyInfoUI(string companyName);
};
