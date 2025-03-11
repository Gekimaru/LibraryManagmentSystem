// LibraryManagmentSystem.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include "Library.h"
#include "Member.h"



using namespace std;


int main()
{
	Library PK_LIB;
	std::wstring autorzy[] = { L"Adam Mickiewicz",L"Juliusz Słowacki",L"George Orwell" };
	std::wstring tytuly[] = { L"Dziady część III",L"Kordian",L"Rok 1984" };
	std::string isbn[] = { "3029546345","5134592343","5431928382"};
	//std::string invalid_isbn[] = {"","3510439514759813475","43"}
	for (int i = 0; i < size(autorzy); i++) {
		Book nowaKsiazka = Book(tytuly[i], autorzy[i], isbn[i]);
		PK_LIB.addBook(nowaKsiazka);
	}
	Member newMember = Member(L"Grzegorz");
	
	PK_LIB.displayBooks();
	cout <<"Koniec"<<endl;




}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
