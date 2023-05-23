#include <AddAccountUI.h>
#include <StringParser.h>
#include <CompanyAccount.h>
#include <GeneralAccount.h>

AddAccountUI::AddAccountUI(AccountCollection* accountCollection)
    : addAccountControl(accountCollection) {}

bool AddAccountUI::requestRegister(std::string input) {
    StringParser parser(input);
    std::vector<std::string> tokens = parser.getTokens();

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

    return addAccountControl.registerAccount(account);
}
