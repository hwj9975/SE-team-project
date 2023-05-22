#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    std::string id;
    std::string password;
    std::string name;
public:
    Account(std::string id, const std::string& password, const std::string& name);
    std::string getId() const;
    std::string getPassword() const;
    std::string getName() const;

};

#endif // ACCOUNT_H
