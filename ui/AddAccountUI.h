#ifndef ADDACCOUNTUI_H
#define ADDACCOUNTUI_H

#include "AddAccountControl.h"
#include <string>
using namespace std;

class AddAccountUI {
private:
    AddAccountControl addAccountControl;

public:
    AddAccountUI(AccountCollection* accountCollection);
    string requestRegister(std::string input);
};

# endif
