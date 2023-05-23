#ifndef SESSIONCOLLECTION_H
#define SESSIONCOLLECTION_H

#include <string>
#include <map>
#include <Session.h>

class SessionCollection
{
private:
    std::map<std::string, Session*> sessionList;

    // singleton instance
    static SessionCollection* instance;

    SessionCollection() {}
    SessionCollection(const SessionCollection& other) {}

public:
    static SessionCollection* getInstance();
    bool createSession(std::string id);
    bool removeSession(std::string id);
    Session* getSession(std::string id);
};

#endif
