#pragma once
#include <iostream>
#include <vector>
#include "Member.h"
#include "Book.h"

class Library {
    std::vector<Book> books;
public:
    void addBook(Book b);
    void removeBook(Book b);
    void borrowBook(Member &Member, std::string isbn);
    void returnBook(Member &Member,std::string isbn);
    void displayBooks();

};


