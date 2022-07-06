#pragma once
#include <vector>
#include "Adresa.h"
#include "Korisnik.h"
using std::vector;

class Imenik
{
public:
	Imenik();
	~Imenik();
	void setAdrese();
	void setKorisnici();
	vector<Adresa>& getAdrese();
	vector<Korisnik>& getKorisnici();
	void ispisImenika();
	void pretragaPoImenu();
	void pretragaPoPrezimenu();
private:
	vector<Adresa> adrese;
	vector<Korisnik> korisnici;
};
