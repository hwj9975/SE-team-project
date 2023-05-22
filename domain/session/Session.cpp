#include "Session.h"

Session::Session(std::string id, const AccountType& accountType) 
    : id(id), accountType(accountType) {

}

std::string Session::getId() const {
    return id;
}

AccountType Session::getAccountType() const {
    return accountType;
}