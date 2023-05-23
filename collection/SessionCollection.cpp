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

    session = new Session(id, account);
}

void SessionCollection::removeSession() {
    session = nullptr;
}

Session* SessionCollection::getSession() {
    return session;
}
