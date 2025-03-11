#include "Library.h"


void Library::addBook(Book b) {
	books.push_back(b);
}
void Library::removeBook(Book b) {
	for (int index = 0; index < books.size(); ++index)
	{
		if (books[index] == b) {
			books.erase(books.begin() + index);
		}

	}
}
void Library::borrowBook(Member &Member,std::string isbn) {
	Member.borrowBook();
	for (Book book : books) {
		if (book.getIsbn() == isbn && book.getAvailible() == true) {
			book.setAvailible(false);
			break;
		}
	}
}
void Library::returnBook(Member& Member, std::string isbn) {
	Member.returnBook();
	for (Book book : books) {
		if (book.getIsbn() == isbn && book.getAvailible() == false) {
			book.setAvailible(true);
			break;
		}
	}
}
void Library::displayBooks() {
	for (Book b: this->books) {
		b.getInfo();
	}

}