#include "SessionCollection.h"
#include "AccountCollection.h"
#include "GeneralAccount.h"
#include "CompanyAccount.h"

SessionCollection* SessionCollection::instance = nullptr;
/**
 * 함수 이름 : getInstance
 * 기능      : 싱글톤 instance 반환
 * 전달 인자 : null
 * 반환값    : SessionCollection*
*/
SessionCollection* SessionCollection::getInstance() {
    if (instance == nullptr) {
        instance = new SessionCollection();
    }

    return instance;
}

/**
 * 함수 이름 : createSession
 * 기능      : 세션 생성
 * 전달 인자 : string
 * 반환값    : void
*/
void SessionCollection::createSession(string id) {
    AccountCollection* accountCollection = AccountCollection::getInstance();
    Account* account = accountCollection->getAccount(id);

    session = new Session(id, account);
}

/**
 * 함수 이름 : removeSession
 * 기능      : 세션 삭제
 * 전달 인자 : null
 * 반환값    : void
*/
void SessionCollection::removeSession() {
    session = nullptr;
}

/**
 * 함수 이름 : getSession
 * 기능      : 세션 반환
 * 전달 인자 : null
 * 반환값    : Session*
*/
Session* SessionCollection::getSession() {
    return session;
}
