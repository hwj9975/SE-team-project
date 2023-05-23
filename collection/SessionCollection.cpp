#include <SessionCollection.h>
#include <AccountCollection.h>
#include <GeneralAccount.h>
#include <CompanyAccount.h>

SessionCollection* SessionCollection::getInstance() {
    if (instance == nullptr) {
        instance = new SessionCollection();
    }

    return instance;
}

bool SessionCollection::createSession(std::string id) {
    AccountCollection* accountCollection = AccountCollection::getInstance();
    Account* account = accountCollection->getAccount(id);
    AccountType accountType;

    if (typeid(*account) == typeid(GeneralAccount)) { // account 종류가 일반 회원일 경우
        accountType = AccountType::GeneralMember;
    } else { // account 종류가 회사 회원일 경우
        accountType = AccountType::CompanyMember;
    }


    Session* session = new Session(id, accountType);
    sessionList.insert({id, session});
}

bool SessionCollection::removeSession(std::string id) {
    if (sessionList.find(id) != sessionList.end()) {
        sessionList.erase(id);
        return true;
    } else {
        return false;
    }
}

Session* SessionCollection::getSession(std::string id) {
    return sessionList.find(id)->second;
}
