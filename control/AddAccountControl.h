#ifndef ADDACCOUNTCONTROL_H
#define ADDACCOUNTCONTROL_H

#include <AccountCollection.h>

class AddAccountControl
{
private:
    AccountCollection* accountCollection;

public:
    /**
     * singleton인 AccountCollection 주입받는 생성자.
    */
    AddAccountControl(AccountCollection* accountCollection) {
        this->accountCollection = accountCollection;
    }

    /**
     * Account 등록.
    */
    bool registerAccount(Account* account) {
        return accountCollection->createAccount(account);
    }
};

#endif
