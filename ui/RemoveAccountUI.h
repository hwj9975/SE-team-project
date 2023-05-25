#ifndef REMOVEACCOUNTUI_H
#define REMOVEACCOUNTUI_H

#include "RemoveAccountControl.h"
using namespace std;

class RemoveAccountUI
{
private:
    RemoveAccountControl removeAccountControl;

public:
    RemoveAccountUI(AccountCollection* accountCollection);
    string requestRemove();
};

#endif
