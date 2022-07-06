#include "Korisnik.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;

Korisnik::Korisnik()
{
	strcpy_s(this->ime, "Niko");
	strcpy_s(this->prezime, "Nikic");
	strcpy_s(this->broj_karte, "000");
}

void Korisnik::setIme()
{
	cout << "Unesite ime: ";
	cin.getline(this->ime, 30);
}

void Korisnik::setPrezime()
{
	cout << "Unesite prezime: ";
	cin.getline(this->prezime, 40);
}

void Korisnik::setBroj()
{
	cout << "Unesite broj telefona: ";
	cin.getline(this->broj_karte, 20);
}

char* Korisnik::getIme()
{
	return this->ime;
}

char* Korisnik::getPrezime()
{
	return this->prezime;
}

char* Korisnik::getBroj()
{
	return this->broj_karte;
}

void Korisnik::unesiKorisnika()
{
	this->setIme();
	this->setPrezime();
	this->setBroj();
}

Korisnik::~Korisnik()
{
}