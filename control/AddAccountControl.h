#ifndef ADDACCOUNTCONTROL_H
#define ADDACCOUNTCONTROL_H

#include "AccountCollection.h"

class AddAccountControl
{
private:
    AccountCollection* accountCollection;

public:
    /**
    * 함수 이름 : AddAccountControl
    * 기능    : singleton인 AccountCollection 주입받는 생성자.
    * 전달 인자: AccountCollection*
    * 반환값  : null
    */
    AddAccountControl(AccountCollection* accountCollection) {
        this->accountCollection = accountCollection;
    }

    /**
    * 함수 이름 : registerAccount
    * 기능    : Account 등록.
    * 전달 인자: Account*
    * 반환값  : bool
    */
    bool registerAccount(Account* account) {
        return accountCollection->createAccount(account);
    }
};

#endif
