#ifndef ADDACCOUNTCONTROL_H
#define ADDACCOUNTCONTROL_H

#include <AccountCollection.h>

class AddAccountControl
{
private:
    AccountCollection* accountCollection;

public:
    AddAccountControl(AccountCollection* accountCollection) {
        this->accountCollection = accountCollection;
    }

    bool registerAccount(Account* account) {
        return accountCollection->createAccount(account);
    }
};

#endif
