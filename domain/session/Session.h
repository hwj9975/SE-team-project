#ifndef SESSION_H
#define SESSION_H

#include <string>
#include <Account.h>

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
