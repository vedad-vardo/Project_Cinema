#pragma once
class Korisnik
{
public:
	Korisnik();
	void setIme();
	void setPrezime();
	void setBroj();
	char* getIme();
	char* getPrezime();
	char* getBroj();
	void unesiKorisnika();
	~Korisnik();
private:
	char ime[30], prezime[40], broj_karte[4];
};
