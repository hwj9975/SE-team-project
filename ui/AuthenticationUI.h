#ifndef AUTHENTICATIONUI_H
#define AUTHENTICATIONUI_H

#include <AuthenticationControl.h>

class AuthenticationUI {
private:
    AuthenticationControl authenticationControl;
public:
    AuthenticationUI(AccountCollection* accountCollection, SessionCollection* sessionCollection);
    bool requestLogin(std::string id, std::string password);
    bool requestLogout(std::string id);
};

#endif
