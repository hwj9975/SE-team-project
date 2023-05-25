#include "Account.h"

/**
 * 함수 이름 : Account
 * 기능    : 생성자
 * 전달 인자: string id, const string& password, const string& name
 * 반환값  : bool
 */
Account::Account(string id, const string& password, const string& name)
    : id(id), password(password), name(name) {
}

/**
 * 함수 이름 : getId
 * 기능    : id 반환
 * 전달 인자: null
 * 반환값  : string
 */
string Account::getId() const {
    return id;
}

/**
 * 함수 이름 : Account
 * 기능    : 생성자
 * 전달 인자: string id, const string& password, const string& name
 * 반환값  : bool
 */
string Account::getPassword() const {
    return password;
}

/**
 * 함수 이름 : getName
 * 기능    : 이름 반환
 * 전달 인자: null
 * 반환값  : string
 */
string Account::getName() const {
    return name;
}
