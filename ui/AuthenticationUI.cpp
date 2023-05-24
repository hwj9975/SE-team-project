#include "AuthenticationUI.h"
#include <iostream>

/**
 * 함수 이름 : AuthenticationUI
 * 기능    : singleton인 AccountCollection, SessionCollection를 주입하는 생성자
 * 전달 인자: AccountCollection*, SessionCollection*
 * 반환값  : null
 */
AuthenticationUI::AuthenticationUI(AccountCollection* accountCollection, SessionCollection* sessionCollection) 
    : authenticationControl(accountCollection, sessionCollection) {}

/**
 * 함수 이름 : requestLogin
 * 기능    : id와 password를 받아 로그인.
 * 전달 인자: id, password
 * 반환값  : string
 */
string AuthenticationUI::requestLogin(string id, string password) {
    if (authenticationControl.login(id, password)) { // 로그인 성공.
        return "" + id + " " + password;
    } else { //로그인 실패.
        return "정상적으로 로그인 하지 못했습니다.";
    }
}

/**
 * 로그아웃.
*/
/**
 * 함수 이름 : requestLogout
 * 기능    : 로그아웃
 * 전달 인자: null
 * 반환값  : string
 */
string AuthenticationUI::requestLogout() {
    string id = authenticationControl.logout();
    if(id == "") {
        return "정상적으로 로그아웃 하지 못했습니다.";
    }
    return id;
}
