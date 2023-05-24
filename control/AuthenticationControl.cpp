#include <stdio.h>
#include <string>
#include "AuthenticationControl.h"

/**
 * 함수 이름 : AuthenticationControl
 * 기능    : singleton 객체인 AccountCollection, SessionCollection을 생성자를 통해 주입받는다.
 * 전달 인자: AccountCollection*, SessionCollection*
 * 반환값  : null
 */
AuthenticationControl::AuthenticationControl(AccountCollection* accountCollection, SessionCollection* sessionCollection) {
    this->accountCollection = accountCollection;
    this->sessionCollection = sessionCollection;
}

/**
 * 함수 이름 : login
 * 기능    : id와 password를 받아 로그인.
 * 전달 인자: string id, string password
 * 반환값  : bool
 */
bool AuthenticationControl::login(string id, string password) {
    if(accountCollection->validateAccount(id, password)) {
        sessionCollection->createSession(id);
        return true;
    } else {
        return false;
    }
}

/**
 * 함수 이름 : logout
 * 기능    : 세션을 삭제함으로써 로그아웃.
 * 전달 인자: null
 * 반환값  : string
 */
string AuthenticationControl::logout() {
    Session* session = sessionCollection->getSession();
    if (session == nullptr) { // 로그인 상태가 아님.
        return "";
    }
    std::string id = session->getId();
    sessionCollection->removeSession(); // 세션 삭제
    return id;
}
