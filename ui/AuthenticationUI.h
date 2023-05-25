#ifndef AUTHENTICATIONUI_H
#define AUTHENTICATIONUI_H

#include "AuthenticationControl.h"
using namespace std;

class AuthenticationUI {
private:
    AuthenticationControl authenticationControl;
public:
    AuthenticationUI(AccountCollection* accountCollection, SessionCollection* sessionCollection);
    string requestLogin(string input);
    string requestLogout();
};

#endif
