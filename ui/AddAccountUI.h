#ifndef ADDACCOUNTUI_H
#define ADDACCOUNTUI_H

#include <AddAccountControl.h>
#include <string>

class AddAccountUI {
private:
    AddAccountControl addAccountControl;

public:
    AddAccountUI(AccountCollection* accountCollection);
    bool requestRegister(std::string input);
};

# endif
