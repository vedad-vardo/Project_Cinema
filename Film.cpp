#include "Film.h"

Film::Film()
{
	ime_filma = "";
	broj_dostupnih_karata = 0;
	cijena_karte = 0.0;
}


Film::Film(string film_ime_filma, int film_br_dostup_karata, double film_cijena_karte)
{
	ime_filma = film_ime_filma;
	broj_dostupnih_karata = film_br_dostup_karata;
	cijena_karte = film_cijena_karte;
}


Film::~Film()
{

}


string Film::getImeFilma()
{
	return ime_filma;
}


int Film::getBrojDostupnihKarata()
{
	return broj_dostupnih_karata;
}


double Film::getCijenaKarte()
{
	return cijena_karte;
}


void Film::setImeFilma(string novo_ime_filma)
{
	ime_filma = novo_ime_filma;
}


void Film::setBrojDostupnihKarata(int novi_brDostupnihkarata)
{
	broj_dostupnih_karata = novi_brDostupnihkarata;
}


void Film::setCijenaKarte(double nova_cijena_karte)
{
	cijena_karte = nova_cijena_karte;
}

// Ova funkcija uzima u obzir koliko korisnik zeli kupiti karata

double Film::KupovinaKarte(int kupovina_dostupnih_karata)
{
	double ukupna_cijena;

	if (kupovina_dostupnih_karata <= broj_dostupnih_karata) 
	{
		ukupna_cijena = kupovina_dostupnih_karata * cijena_karte;
		broj_dostupnih_karata = broj_dostupnih_karata - kupovina_dostupnih_karata;
		return ukupna_cijena;
	}
	else 
	{
		return -1;
	}
}

// Ova funkcija prikazuje sva tri aspekta objektFilma

void Film::Display()
{
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);
	cout.precision(2);

	system("cls");
	cout << "\n\t\t\t\t\t\t\t\t     ******************** " << endl;
	cout << "\t\t\t\t\t\t\t\t    [   DETALJI FILMA    ]" << endl;
	cout << "\t\t\t\t\t\t\t\t     ******************** " << endl;
	cout << "\n\n\t\t\t\t\t\t\t+------------------------------------------+" << endl;
	cout << "\t\t\t\t\t\t\t|   #IME  |    " << ime_filma << "                      |" << endl;
	cout << "\t\t\t\t\t\t\t|------------------------------------------|" << endl;
	cout << "\t\t\t\t\t\t\t|   #Broj dostupnih karata |   " << broj_dostupnih_karata << "          |" << endl;
	cout << "\t\t\t\t\t\t\t|------------------------------------------|" << endl;
	cout << "\t\t\t\t\t\t\t|   #Cijena jedne karte|   " << cijena_karte << "           |" << endl;
	cout << "\t\t\t\t\t\t\t+------------------------------------------+" << endl;
}