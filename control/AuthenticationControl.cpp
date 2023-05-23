#include <stdio.h>
#include "AuthenticationControl.h"

AuthenticationControl::AuthenticationControl(AccountCollection* accountCollection, SessionCollection* sessionCollection) {
    this->accountCollection = accountCollection;
    this->sessionCollection = sessionCollection;
}

bool AuthenticationControl::login(std::string id, std::string password) {
    Account* account = accountCollection->getAccount(id);
    if (account == nullptr) {
        return false;
    }

    if (account->getPassword() == password) {
        return sessionCollection->createSession(id);
    } else {
        return false;
    }
}

bool AuthenticationControl::logout(std::string id) {
    Account* account = accountCollection->getAccount(id);
    if(account == nullptr) {
        return false;
    }

    return sessionCollection->removeSession(id);
}
