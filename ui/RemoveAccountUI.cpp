#include "RemoveAccountUI.h"
#include <iostream>

/**
 * 함수 이름 : RemoveAccountUI
 * 기능    : singleton인 accountCollection을 주입받는 생성자.
 * 전달 인자: AccountCollection*
 * 반환값  : null
 */
RemoveAccountUI::RemoveAccountUI(AccountCollection* accountCollection) 
    : removeAccountControl(accountCollection) {}

/**
 * 함수 이름 : requestRemove
 * 기능    : 계정을 삭제
 * 전달 인자: null
 * 반환값  : id
 */
string RemoveAccountUI::requestRemove() {
    string id = removeAccountControl.removeAccount();
    return id;
}