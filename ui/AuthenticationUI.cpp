#include "AuthenticationUI.h"
#include <iostream>

/**
 * singleton인 AccountCollection, SessionCollection를 생성자를 통해 주입.
*/
AuthenticationUI::AuthenticationUI(AccountCollection* accountCollection, SessionCollection* sessionCollection) 
    : authenticationControl(accountCollection, sessionCollection) {}

/**
 * id와 password를 받아 로그인.
*/
bool AuthenticationUI::requestLogin(std::string id, std::string password) {
    std::cout << "2.1. 로그인\n";
    std::cout << "> ";
    if (authenticationControl.login(id, password)) { // 로그인 성공.
        std::cout << id << " " << password << "\n";
        return true;
    } else { //로그인 실패.
        std::cout << "정상적으로 로그인 하지 못했습니다.\n";
        return false;
    }
}

/**
 * 로그아웃.
*/
bool AuthenticationUI::requestLogout() {
    std::cout << "2.2. 로그아웃\n";
    std::cout << "> ";

    std::string id = authenticationControl.logout();
    if(id == "") {
        std::cout << "정상적으로 로그아웃 하지 못했습니다.\n";
        return false;
    }
    std::cout << id << "\n";
    return true;
}
