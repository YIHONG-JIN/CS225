#ifndef localqueue_hpp
#define localqueue_hpp

#include <iostream>
#include <stdint.h>
#include "Person.hpp"

// class for each node
class PeopleLocalNode
{
    friend class PeopleLocalQueue;
    PeopleLocalNode *next;
    Person *person_ptr;
};

// class for each queue
class PeopleLocalQueue
{
    PeopleLocalNode *front = NULL;
    PeopleLocalNode *back = NULL;
    int32_t length = 0;

public:
    int32_t getLength(void)
    {
        return length;
    }
    void init(void);
    int pushBack(Person *const ptr);
    Person *popFront(void);
    int deleteNode(const Person *thePerson);
};

#endif
