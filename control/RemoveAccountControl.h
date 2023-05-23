#ifndef REMOVEACCOUNTCONTROL_H
#define REMOVEACCOUNTCONTROL_H

#include <string>
#include <AccountCollection.h>

class RemoveAccountControl
{
private:
    AccountCollection* accountCollection;
public:
    RemoveAccountControl(AccountCollection* accountCollection) {
        this->accountCollection = accountCollection;
    }
    
    bool removeAccount(std::string id) {
        return accountCollection->removeAccount(id);
    }
};

#endif
