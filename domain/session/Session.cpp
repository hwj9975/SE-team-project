#include "Session.h"

/**
 * 함수 이름 : Session
 * 기능    : 생성자
 * 전달 인자: string id, Account* account
 * 반환값  : null
 */
Session::Session(string id, Account* account)
    : id(id), account(account) {

}

/**
 * 함수 이름 : getId
 * 기능    : 세션의 id 반환
 * 전달 인자: null
 * 반환값  : string
 */
std::string Session::getId() {
    return id;
}

/**
 * 함수 이름 : getAccount
 * 기능    : 계정 반환
 * 전달 인자: null
 * 반환값  : Account*
 */
Account* Session::getAccount() {
    return account;
}