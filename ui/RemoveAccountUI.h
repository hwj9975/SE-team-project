#ifndef REMOVEACCOUNTUI_H
#define REMOVEACCOUNTUI_H

#include <RemoveAccountControl.h>

class RemoveAccountUI
{
private:
    RemoveAccountControl removeAccountControl;

public:
    RemoveAccountUI(AccountCollection* accountCollection);
    bool requestRemove(std::string id);
};

#endif
