#include "Member.h"

Member::Member(std::wstring name) {
    this->_name = name;
    this->_booksBorrowed = 0;
}

void Member::borrowBook()
{
    if (_booksBorrowed == UINT32_MAX - 1) 
        std::cout << "Nie mo¿esz wypo¿yczyæ wiêcej ksi¹¿ek! Program tego nie wytrzyma" << std::endl;
    else
        this->_booksBorrowed += 1;
    
}
void Member::returnBook() 
{
    if (this->_booksBorrowed == 0)
        std::cout << "Nie masz ¿adnych wypo¿yczonych ksi¹¿ek" << std::endl;
    else
        this->_booksBorrowed += 1;
}