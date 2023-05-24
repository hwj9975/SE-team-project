#include <RemoveAccountUI.h>
#include <iostream>

/**
 * singleton인 accountCollection을 주입받는 생성자.
*/
RemoveAccountUI::RemoveAccountUI(AccountCollection* accountCollection) 
    : removeAccountControl(accountCollection) {}

/**
 * 계정을 삭제
*/
bool RemoveAccountUI::requestRemove() {
    std::cout << "1.2. 회원탈퇴\n";
    
    std::string id = removeAccountControl.removeAccount();

    std::cout << "> " << id;
}