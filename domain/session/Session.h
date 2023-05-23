#ifndef SESSION_H
#define SESSION_H

#include <string>
#include <AccountType.h>

class Session {
private:
    std::string id;
    AccountType accountType;
public:
    Session(std::string id, const AccountType& accountType);
    std::string getId() const;
    AccountType getAccountType() const;
};

#endif // SESSION_H
