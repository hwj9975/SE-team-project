#ifndef AUTHENTICATIONCONTROL_H
#define AUTHENTICATIONCONTROL_H

#include <string>
#include "SessionCollection.h"
#include "AccountCollection.h"
using namespace std;

class AuthenticationControl {
private:
    AccountCollection* accountCollection; //singleton
    SessionCollection* sessionCollection; //singleton

public:
    AuthenticationControl(AccountCollection* accountCollection, SessionCollection* sessionCollection); //생성자 주입
    bool login(string id, string password);
    string logout();
};


#endif
