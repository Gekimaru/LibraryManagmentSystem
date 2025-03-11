#pragma once
#include <iostream>

class Book {
private:
	std::wstring _title;
	std::wstring _author;
	std::string _isbn;
	bool _availible;
public:
	Book(std::wstring title, std::wstring author, std::string isbn);
	void setBook(Book book);
	std::wstring getTitle();
	std::wstring getAuthor();
	std::string getIsbn();
	bool getAvailible();
	void setTitle(std::wstring title);	
	void setAuthor(std::wstring author);
	void setIsbn(std::string isbn);
	void setAvailible(bool value);
	void getInfo();
	bool operator == (Book b);
	~Book();
};