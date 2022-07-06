#include "Imenik.h"
#include <iostream>

using std::cin;
using std::cout;

Imenik::Imenik()
{
}

Imenik::~Imenik()
{
}

void Imenik::setAdrese()
{
	Adresa* temp = new Adresa();
	temp->unesiAdresu();
	this->getAdrese().push_back(*temp);
	delete temp;
}

void Imenik::setKorisnici()
{
	Korisnik* temp = new Korisnik();
	temp->unesiKorisnika();
	this->getKorisnici().push_back(*temp);
	delete temp;
}

vector<Adresa>& Imenik::getAdrese()
{
	return this->adrese;
}

vector<Korisnik>& Imenik::getKorisnici()
{
	return this->korisnici;
}

void Imenik::ispisImenika()
{
	system("cls");
	system("color A0");

	cout << "\t\t\t\t\t\t________________________________\n";
	cout << "\t\t\t\t\t\t|\t      SPISAK\t\t|\n";
	cout << "\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n";
	cout << "\t\t\tR.br.\tPrezime\t\tIme     \tBroj karte\t\tAdresa\t\tGrad";
	cout << "\n\t\t\t--------------------------------------------------------------------------------------\n";
	if (this->getAdrese().size() == 0) {
		cout << "Spisak gledalaca je prazan!\n";
	}
	else {
		Korisnik* k = new Korisnik();
		Adresa* a = new Adresa();
		for (int i = 0; i < this->getAdrese().size(); i++) {
			*k = this->getKorisnici()[i];
			*a = this->getAdrese()[i];
			cout << "\t\t\t" << i + 1 << ".\t";
			cout << k->getPrezime() << "\t\t";
			cout << k->getIme() << "\t\t";
			cout << k->getBroj() << "\t";
			cout <<"\t" << a->getUlica() << " " << a->getBroj() << "\t";
			cout << "\t" << a->getGrad() << "\n";
		}
		delete a;
		delete k;
	}
}

void Imenik::pretragaPoImenu()
{
	char imeP[30];
	cout << "Unesite ime za pretragu: ";
	cin.getline(imeP, 30);
	if (this->getAdrese().size() == 0) {
		cout << "Imenik je prazan!\n";
	}
	else {
		Imenik* temp = new Imenik();
		for (int i = 0; i < this->getAdrese().size(); i++) {
			if (_strcmpi(this->getKorisnici()[i].getIme(), imeP) == 0) {
				temp->getAdrese().push_back(this->getAdrese()[i]);
				temp->getKorisnici().push_back(this->getKorisnici()[i]);
			}
		}
		if (temp->getAdrese().size() == 0) {
			cout << "Ne postoje korisnici sa imenom: " << imeP << "!\n";
		}
		else {
			temp->ispisImenika();
		}
		delete temp;
	}
}

void Imenik::pretragaPoPrezimenu()
{
	char prezimeP[40];
	cout << "Unesite prezime za pretragu: ";
	cin.getline(prezimeP, 30);
	if (this->getAdrese().size() == 0) {
		cout << "Imenik je prazan!\n";
	}
	else {
		Imenik* temp = new Imenik();
		for (int i = 0; i < this->getAdrese().size(); i++) {
			if (_strcmpi(this->getKorisnici()[i].getPrezime(), prezimeP) == 0) {
				temp->getAdrese().push_back(this->getAdrese()[i]);
				temp->getKorisnici().push_back(this->getKorisnici()[i]);
			}
		}
		if (temp->getAdrese().size() == 0) {
			cout << "Ne postoje korisnici sa prezimenom: " << prezimeP << "!\n";
		}
		else {
			temp->ispisImenika();
		}
		delete temp;
	}
}

