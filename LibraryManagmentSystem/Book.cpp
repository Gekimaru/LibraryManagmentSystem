#include "Includes.h"
#include "Book.h"



Book::Book(string title, string author, string isbn):_title(title),_author(author),_isbn(isbn) {

}
void Book::setBook(Book book) {
    _author = book.getAuthor();
    _title  = book.getTitle();
    _isbn   = book.getIsbn();
}
    
string Book::getTitle() {
    return this->_title;
}
string Book::getAuthor() {
    return this->_author;
}
string Book::getIsbn() {
    return this->_isbn;
}
   
void Book::getInfo() {
    std::cout << "Tytu³: " << getTitle() << std::endl;
    std::cout << "Autor:" << getAuthor() << std::endl;
    std::cout << "isbn:" << getIsbn() << std::endl;
}