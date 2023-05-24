#include "AddAccountUI.h"
#include "StringParser.h"
#include "CompanyAccount.h"
#include "GeneralAccount.h"
#include <iostream>

AddAccountUI::AddAccountUI(AccountCollection* accountCollection)
    : addAccountControl(accountCollection) {}

bool AddAccountUI::requestRegister(std::string input) {
    std::cout << "1.1. 회원가입\n";
    std::cout << "> ";

    // input을 ' ' 기준으로 파싱.
    StringParser parser(input);
    std::vector<std::string> tokens = parser.getTokens(); 

    // Account 객체 생성
    Account* account; 
    std::string name = tokens.at(1);
    std::string id = tokens.at(3);
    std::string password = tokens.at(4);
    if (tokens.at(0) == "0") { // 회사 회원
        std::string businessNumber = tokens.at(2);
        account = new CompanyAccount(id, password, name, businessNumber);
    } else if (tokens.at(0) == "1") { // 일반 회원
        std::string residentId = tokens.at(2);
        account = new GeneralAccount(id, password, name, residentId);
    }

    // 결과출력
    if (addAccountControl.registerAccount(account)) {
        std::cout << tokens.at(0) << " " << tokens.at(2) << " " << id << " " << password << "\n";
    } else {
        std::cout << "회원 가입이 정상적으로 이루어지지 않았습니다.\n";
        return false;
    }
}
