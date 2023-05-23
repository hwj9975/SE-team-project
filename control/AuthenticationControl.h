#ifndef AUTHENTICATIONCONTROL_H
#define AUTHENTICATIONCONTROL_H

#include <string>
#include <SessionCollection.h>
#include <AccountCollection.h>

class AuthenticationControl {
private:
    AccountCollection* accountCollection;
    SessionCollection* sessionCollection;

public:
    AuthenticationControl(AccountCollection* accountCollection, SessionCollection* sessionCollection);
    bool login(std::string id, std::string password);
    bool logout(std::string id);
};


#endif
