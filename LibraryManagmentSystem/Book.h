#pragma once
#include "Includes.h"

class Book {
private:
	string _title;
	string _author;
	string _isbn;
public:
	Book(string title, string author, string isbn);
	void setBook(Book book);
	string getTitle();
	string getAuthor();
	string getIsbn();
	void getInfo();
};