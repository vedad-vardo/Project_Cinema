#include <cstdlib>
#include <chrono>
#include <thread>  
#include <conio.h>
#include <windows.h>
#include "Film.h"
#include "KinoKarta.h"
#include "Imenik.h"

int main()
{
	/*
	try {
		char buffer[256];
		ifstream myfile("uvod.txt");

		while (!myfile.eof())
		{
			myfile.getline(buffer, 100);
			cout << buffer << endl;
		}
	}
	catch (...) {
		cout << "EROR!\n";
	}

	system("PAUSE");
	system("CLS");
	*/
	Film objektFilma[filmovi];

	unique_ptr<KinoKarta> p_KinoKarta( new KinoKarta("Babino", "Zenica"));
	p_KinoKarta->Init(objektFilma, filmovi);
	p_KinoKarta->Run();

	

	
	/*
	int izbor;
	Imenik imenik;
	do {
		system("cls");
		system("Color f0");
		cout << "\t\t\t\t\t\t\t\t*********************\n";
		cout << "\t\t\t\t\t\t\t\t*\tMENU        *\n";
		cout << "\t\t\t\t\t\t\t\t*********************\n";
		cout << "\t\t\t\t\t\t\t\t*                   *\n";
		cout << "\t\t\t\t\t\t\t\t*  1. Unesi stavku  *\n";
		cout << "\t\t\t\t\t\t\t\t*                   *\n";
		cout << "\t\t\t\t\t\t\t\t*  2. Ispis imenika *\n";
		cout << "\t\t\t\t\t\t\t\t*                   *\n";
		cout << "\t\t\t\t\t\t\t\t*  3. Pretraga      *\n";
		cout << "\t\t\t\t\t\t\t\t*                   *\n";
		cout << "\t\t\t\t\t\t\t\t*  4. Kraj          *\n";
		cout << "\t\t\t\t\t\t\t\t*                   *\n";
		cout << "\t\t\t\t\t\t\t\t*********************\n\n";
		cout << "\t\t\t\t\t\tIZBOR: ";
		cin >> izbor;
		cin.ignore();
		if (izbor == 1) {
			imenik.setKorisnici();
			imenik.setAdrese();
			cout << "\nUnos zavrsen!\n";
			system("pause");
		}
		else if (izbor == 2) {
			imenik.ispisImenika();
			cout << "\nIspis zavrsen!\n";
			system("pause");
		}
		else if (izbor == 3) {
			int izbor2;
			do {
				system("cls");
				system("color 30");
				cout << "\t\t\t\t\t\t ==================================\n";
				cout << "\t\t\t\t\t\t| Dobro dosli u pretragu korisnika | \n";
				cout << "\t\t\t\t\t\t ==================================\n";
				cout << "\n\t\t\t\t---> 1. Pretraga po imenu\n";
				cout << "\n\t\t\t\t---> 2. Pretraga po prezimenu\n";
				cout << "\n\t\t\t\t---> 3. Vrati se\n";
				cout << "\n\n\t\t\t\t IZBOR: ";
				cin >> izbor2;
				cin.ignore();
				if (izbor2 == 1) {
					imenik.pretragaPoImenu();
					cout << "\nPretraga zavrsena!\n";
					system("pause");
					system("cls");
				}
				else if (izbor2 == 2) {
					imenik.pretragaPoPrezimenu();
					cout << "\nPretraga zavrsena!\n";
					system("pause");
					system("cls");
				}
				else if (izbor2 == 3) {
					cout << "\nPretraga zavrsena!\n";
					system("pause");
					system("cls");
				}
			} while (izbor2 != 3);
		}
	} while (izbor != 4);
	*/
	return 0;
}