#ifndef AUTHENTICATIONUI_H
#define AUTHENTICATIONUI_H

#include "AuthenticationControl.h"
using namespace std;

class AuthenticationUI {
private:
    AuthenticationControl authenticationControl;
public:
    AuthenticationUI(AccountCollection* accountCollection, SessionCollection* sessionCollection);
    string requestLogin(std::string id, std::string password);
    string requestLogout();
};

#endif
