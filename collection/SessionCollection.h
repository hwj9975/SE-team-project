#ifndef SESSIONCOLLECTION_H
#define SESSIONCOLLECTION_H

#include <string>
#include <map>
#include <Session.h>

class SessionCollection
{
private:
    Session* session;

    // singleton instance
    static SessionCollection* instance;

    SessionCollection() {}
    SessionCollection(const SessionCollection& other) {}

public:
    static SessionCollection* getInstance();
    bool createSession(std::string id);
    void removeSession();
    Session* getSession();
};

#endif
