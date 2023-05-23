#include "Session.h"

Session::Session(std::string id, Account* account) 
    : id(id), account(account) {

}

std::string Session::getId() {
    return id;
}

Account* Session::getAccount() {
    return account;
}