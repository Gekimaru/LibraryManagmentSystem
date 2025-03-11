#include "Book.h"



Book::Book(std::wstring title, std::wstring author, std::string isbn):_title(title),_author(author),_isbn(isbn) {
    _availible = true;
}
void Book::setBook(Book book) {
    _author = book.getAuthor();
    _title  = book.getTitle();
    _isbn   = book.getIsbn();
}
    
std::wstring Book::getTitle() {
    return this->_title;
}
std::wstring Book::getAuthor() {
    return this->_author;
}
std::string Book::getIsbn() {
    return this->_isbn;
}
bool Book::getAvailible() {
    return this->_availible;
}
void Book::setTitle(std::wstring title) {
    this->_title = title;
}
void Book::setAuthor(std::wstring author) {
    this->_author = author;
}
void Book::setIsbn(std::string isbn) {
    if (isbn.length() == 10)
        this->_isbn = isbn;
    else
        std::cout << "Nieprawid³owa d³ugoœæ ISBN musi on zawieraæ dok³adnie 10 znaków!" << std::endl;
}
void Book::setAvailible(bool value) {
    this->_availible = value;
}

void Book::getInfo() {
    std::wcout << L"Tytu³" << this->getTitle() << std::endl;
    std::wcout << L"Autor:" << this->getAuthor() << std::endl;
    std::cout << "isbn:" << this->getIsbn() << std::endl;
}
bool Book::operator==(Book b)
{
    return b.getAvailible()==this->getAvailible() && b.getIsbn() == this->getIsbn();
}





Book::~Book() {
    std::cout << "Niszczê ksi¹¿kê" << std::endl;
}

