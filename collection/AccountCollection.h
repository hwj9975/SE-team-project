#ifndef ACCOUNTCOLLECTION_H
#define ACCOUNTCOLLECTION_H

#include <string>
#include <map>
#include <Account.h>

class AccountCollection
{
private:
    std::map<std::string, Account*> accountList; // account id와 account 객체의 참조를 저장.

    // singleton instance
    static AccountCollection* instance;

    AccountCollection() {}
    AccountCollection(const AccountCollection& other) {}

public:
    static AccountCollection* getInstance();
    bool createAccount(Account* account);
    bool removeAccount(std::string id);
    bool validaateAccount(std::string id, std::string password);
    Account* getAccount(std::string id);
};

#endif
