#include <AccountCollection.h>

AccountCollection* AccountCollection::getInstance() {
    if (instance == nullptr) {
        instance = new AccountCollection();
    }

    return instance;
}
bool AccountCollection::createAccount(Account* account) {
    if (accountList.find(account->getId()) == accountList.end()) {
        accountList.insert({account->getId(), account});
        return true;
    } else {
        return false;
    }
}

bool AccountCollection::removeAccount(std::string id) {
    if (accountList.find(id) != accountList.end()) {
        accountList.erase(id);
        return true;
    } else {
        return false;
    }
}

bool AccountCollection::validaateAccount(std::string id, std::string password) {
    if (accountList.find(id) != accountList.end()) {
        Account* account = accountList.find(id)->second;
        if (account->getPassword() == password) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }

}

Account* AccountCollection::getAccount(std::string id) {
    return accountList.find(id)->second;
}
