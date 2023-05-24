#include "AddAccountUI.h"
#include "StringParser.h"
#include "CompanyAccount.h"
#include "GeneralAccount.h"
#include <iostream>

AddAccountUI::AddAccountUI(AccountCollection* accountCollection)
    : addAccountControl(accountCollection) {}

/**
 * 함수 이름 : requestRegister
 * 기능    : 회원 가입
 * 전달 인자: [회사이름] [사업자번호] [ID] or [이름] [주민번호] [ID] [비밀번호]
 * 반환값  : 1 [회사이름] [사업자번호] [ID] [비밀번호] or 2 [이름] [주민번호] [ID] [비밀번호]
 */
string AddAccountUI::requestRegister(std::string input) {
    // input을 ' ' 기준으로 파싱.
    StringParser parser(input);
    std::vector<std::string> tokens = parser.getTokens(); 

    // Account 객체 생성
    Account* account; 
    string name = tokens.at(1);
    string id = tokens.at(3);
    string password = tokens.at(4);
    if (tokens.at(0) == "0") { // 회사 회원
        string businessNumber = tokens.at(2);
        account = new CompanyAccount(id, password, name, businessNumber);
    } else if (tokens.at(0) == "1") { // 일반 회원
        string residentId = tokens.at(2);
        account = new GeneralAccount(id, password, name, residentId);
    }

    // 결과출력
    if (addAccountControl.registerAccount(account)) {
        return "" + tokens.at(0) + " " + tokens.at(2) + " " + id + " " + password + "\n";
    } else {
        return "회원 가입이 정상적으로 이루어지지 않았습니다.";

    }
}
