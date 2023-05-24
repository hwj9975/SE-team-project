#include <AccountCollection.h>

/**
 * singleton instance 가져옴.
*/
AccountCollection* AccountCollection::getInstance() {
    if (instance == nullptr) {
        instance = new AccountCollection();
    }

    return instance;
}

/**
 * Account의 참조를 받아 accountList에 저장.
*/
bool AccountCollection::createAccount(Account* account) {
    if (accountList.find(account->getId()) == accountList.end()) { // Account id가 존재하지 않는경우.
        accountList.insert({account->getId(), account});
        return true;
    } else { // Account id가 이미 등록된 경우.
        return false;
    }
}

/**
 * 탈퇴할 id를 받아 accountList에서 삭제
*/
bool AccountCollection::removeAccount(std::string id) {
    if (accountList.find(id) != accountList.end()) { // Account id가 존재하는 경우.
        accountList.erase(id);
        return true;
    } else { // Account id가 없는 경우.
        return false;
    }
}

/**
 * 로그인 할 id와 password가 맞는지 확인.
*/
bool AccountCollection::validaateAccount(std::string id, std::string password) {
    if (accountList.find(id) != accountList.end()) { // Account id가 존재하는 경우.
        Account* account = accountList.find(id)->second;
        if (account->getPassword() == password) { // password가 일치 하는경우.
            return true;
        } else { // password가 일치하지 않는 경우.
            return false;
        }
    } else { // Account id가 없는 경우.
        return false;
    }

}

/**
 * id를 이용해 찾은 Account*를 반환
*/
Account* AccountCollection::getAccount(std::string id) { 
    return accountList.find(id)->second;
}
