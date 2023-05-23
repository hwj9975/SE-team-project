#include <iostream>
#include <AddAccountUI.h>
#include <AccountCollection.h>
#include <GeneralAccount.h>

int main(int argc, char const *argv[]) {
    AccountCollection* accountCollection = AccountCollection::getInstance();
    AddAccountUI ui(accountCollection);
    std::string input = "1 hello 1q2w kim naver";
    ui.requestRegister(input);
    return 0;
}
