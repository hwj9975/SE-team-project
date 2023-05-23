#include <RemoveAccountUI.h>

RemoveAccountUI::RemoveAccountUI(AccountCollection* accountCollection) 
    : removeAccountControl(accountCollection) {}

bool RemoveAccountUI::requestRemove(std::string id) {
    removeAccountControl.removeAccount(id);
}