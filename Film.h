#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <Windows.h>
#include <string>

using namespace std;

class Film
{
private:
	string ime_filma;
	int broj_dostupnih_karata;
	double cijena_karte;
public:
	Film();
	Film(string film_ime_filma, int film_br_dostup_karata, double film_cijena_karte);
	~Film();

	string getImeFilma();
	int getBrojDostupnihKarata();
	double getCijenaKarte();
	void setImeFilma(string novo_ime_filma);
	void setBrojDostupnihKarata(int nove_dostupne_karte);
	void setCijenaKarte(double nova_cijena_karte);

	double KupovinaKarte(int kupovina_dostupnih_karti);
	void Display();
};
