#ifndef SESSION_H
#define SESSION_H

#include <string>
#include "Account.h"

using namespace std;

class Session {
private:
    std::string id;
    Account* account;
public:
    Session(std::string id, Account* account);
    std::string getId();
    Account* getAccount();
};

#endif // SESSION_H
