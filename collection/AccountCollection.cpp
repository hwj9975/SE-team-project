#include "AccountCollection.h"

AccountCollection* AccountCollection::instance = nullptr;

/**
 * 함수 이름 : getInstance
 * 기능    : singleton instance 가져옴.
 * 전달 인자: null
 * 반환값  : AccountCollection*
 */
AccountCollection* AccountCollection::getInstance() {
    if (instance == nullptr) {
        instance = new AccountCollection();
    }

    return instance;
}

/**
 * 함수 이름 : createAccount
 * 기능    : Account의 참조를 받아 accountList에 저장.
 * 전달 인자: Account*
 * 반환값  : bool
 */
bool AccountCollection::createAccount(Account* account) {
    if (accountList.find(account->getId()) == accountList.end()) { // Account id가 존재하지 않는경우.
        accountList.insert({account->getId(), account});
        return true;
    } else { // Account id가 이미 등록된 경우.
        return false;
    }
}

/** removeAccount
 * 함수 이름 : removeAccount
 * 기능    : 탈퇴할 id를 받아 accountList에서 삭제
 * 전달 인자: string
 * 반환값  : bool
 */
bool AccountCollection::removeAccount(string id) {
    if (accountList.find(id) != accountList.end()) { // Account id가 존재하는 경우.
        accountList.erase(id);
        return true;
    } else { // Account id가 없는 경우.
        return false;
    }
}

/**
 * 함수 이름 : validateAccount
 * 기능    : 로그인 할 id와 password가 맞는지 확인.
 * 전달 인자: string id, string password
 * 반환값  : bool
 */
bool AccountCollection::validateAccount(string id, string password) {
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
 * 함수 이름 : getAccount
 * 기능    : id를 이용해 찾은 Account*를 반환
 * 전달 인자: string
 * 반환값  : Account*
 */
Account* AccountCollection::getAccount(string id) {
    return accountList.find(id)->second;
}
