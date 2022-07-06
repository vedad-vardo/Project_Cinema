#include "Adresa.h"
#include <iostream>
#include <string>
using std::cout;
using std::cin;

Adresa::Adresa()
{
	strcpy_s(this->ulica, "Ulica");
	strcpy_s(this->broj, "bb");
	strcpy_s(this->grad, "Zenica");
}

void Adresa::setUlica()
{
	cout << "Unesite naziv ulice: ";
	cin.getline(this->ulica, 100);
}

void Adresa::setBroj()
{
	cout << "Unesite broj ulice: ";
	cin.getline(this->broj, 5);
}

void Adresa::setGrad()
{
	cout << "Unesite naziv grada: ";
	cin.getline(this->grad, 50);
}

char* Adresa::getUlica()
{
	return this->ulica;
}

char* Adresa::getBroj()
{
	return this->broj;
}

char* Adresa::getGrad()
{
	return this->grad;
}

void Adresa::unesiAdresu()
{
	this->setUlica();
	this->setBroj();
	this->setGrad();
}

bool Adresa::pretragaPoUlici(char* u)
{
	return _strcmpi(this->ulica, u) == 0;
}

Adresa::~Adresa()
{
}