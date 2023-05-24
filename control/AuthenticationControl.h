#ifndef AUTHENTICATIONCONTROL_H
#define AUTHENTICATIONCONTROL_H

#include <string>
#include "SessionCollection.h"
#include "AccountCollection.h"

class AuthenticationControl {
private:
    AccountCollection* accountCollection; //singleton
    SessionCollection* sessionCollection; //singleton

public:
    AuthenticationControl(AccountCollection* accountCollection, SessionCollection* sessionCollection); //생성자 주입
    bool login(std::string id, std::string password);
    std::string logout();
};


#endif
