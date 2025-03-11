#pragma once
#include <iostream>


class Member{
private:
    std::wstring _name;
    std::uint32_t _booksBorrowed;
public:

    Member(std::wstring name);

    void borrowBook();

    void returnBook();




};
