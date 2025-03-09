#include "Includes.h"


class Member {
    char* _name = new char[32];
    uint16_t _booksBorrowed;
public:
    Member(char* name) {
        this->_name = name;
        this->_booksBorrowed = 0;
    }
};
