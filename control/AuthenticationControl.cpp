#include <stdio.h>
#include <string>
#include "AuthenticationControl.h"

/**
 * singleton 객체인 AccountCollection, SessionCollection을 생성자를 통해 주입받는다.
*/
AuthenticationControl::AuthenticationControl(AccountCollection* accountCollection, SessionCollection* sessionCollection) {
    this->accountCollection = accountCollection;
    this->sessionCollection = sessionCollection;
}

/**
 * id와 password를 받아 로그인.
*/
bool AuthenticationControl::login(std::string id, std::string password) {
    Account* account = accountCollection->getAccount(id);
    if (account == nullptr) { // 해당 계정이 존재하지 않는 경우.
        return false;
    }

    if (account->getPassword() == password) { // 로그인 성공.
        return sessionCollection->createSession(id);
    } else { // 비밀번호 틀린경우.
        return false;
    }
}

/**
 * 세션을 삭제함으로써 로그아웃.
*/
std::string AuthenticationControl::logout() {
    Session* session = sessionCollection->getSession();
    if (session == nullptr) { // 로그인 상태가 아님.
        return "";
    }
    std::string id = session->getId();
    sessionCollection->removeSession(); // 세션 삭제
    return id;
}
