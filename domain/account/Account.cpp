#include "Account.h"

Account::Account(std::string id, const std::string& password, const std::string& name)
    : id(id), password(password), name(name) {
}

std::string Account::getId() const {
    return id;
}

std::string Account::getPassword() const {
    return password;
}

std::string Account::getName() const {
    return name;
}
