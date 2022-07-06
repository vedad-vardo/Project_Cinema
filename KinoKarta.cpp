#include "KinoKarta.h"

//Konstruktor, postavljanje pointera na nula

KinoKarta::KinoKarta()
{
	p_ListaFilmova = NULL;
}

//nedefultni konsturktor, sluzi za dopisivanje imena kinu, lokacije i incijaliziranja pointera ponovo na nula

KinoKarta::KinoKarta(string Kino_ime_kina, string Kino_lokacija_kina)
{
	ime_Kina = Kino_ime_kina;
	lokacija_Kina = Kino_lokacija_kina;
	p_ListaFilmova = NULL;
}

// public destruktor
KinoKarta::~KinoKarta()
{
	cout << "Kino " << ime_Kina << ",Lokacija" << lokacija_Kina << " je zatvoreno :(" << endl;
}

// Init ispunjava niz filmovi

void KinoKarta::Init(Film* p_Kino_ListaFilmova, int VelNiza)
{

	string naslov_filma[filmovi] =
	{
		"Armin",
		"Mujo gleda lijepu Nizamu",
		"Nafaka",
		"Ovo malo duse",
		"Mujo gleda lijepu Nizamu 2",
		"Kod amidze Idriza",
		"Nebo iznad krajolika",
		"Gori vatra"
	};

	int kolicina_karte[filmovi] = { 100,75,90,90,75,115,120,130 };
	
	double cijena_karte[filmovi] = { 11.5,11.5,11.5,11.5,11.5,13.5,13.5,15.0 };

	Film* p = p_Kino_ListaFilmova;

	for (int i = 0; i <= filmovi - 1; i++) 
	{
		p->setImeFilma(naslov_filma[i]);
		p->setBrojDostupnihKarata(kolicina_karte[i]);
		p->setCijenaKarte(cijena_karte[i]);
		p++;
	}

	p_ListaFilmova = p_Kino_ListaFilmova;

}

// Funkcija koja se koristi za ispis iz menija...

void KinoKarta::Run()
{
	int odabir;

	do {

		DisplayMenu();

		cout << endl << "\t\t\t\t\t\t\tMolimo Vas odaberite opciju: ";

		cin >> odabir;

		switch (odabir)
		{

		case 1:
			PogledajFilmove();
			system("PAUSE");
			system("CLS");
			break;

		case 2:

			PretraziFilm();
			system("PAUSE");
			system("CLS");
			break;

		case 3:

			KupiKartu();
			system("PAUSE");
			system("CLS");
			break;

		case 4:

			cout << "\n " << endl;
			break;

		default:
			cout << "\n\n\t\t\t\t\t\t\t===================================================" << endl;
			cout << "\t\t\t\t\t\t\t|   Molimo vas odaberite ispravnu opciju, hvala!  |" << endl;
			cout << "\t\t\t\t\t\t\t===================================================" << endl;
			cin.ignore();
			Sleep(1300);
			system("cls");

		}
	} while (odabir != 4);
}

// Menu

void KinoKarta::DisplayMenu()
{
	system("color 03");

	enum RedniBroj { A = 1, B, C, D };
	{};


	cout << "\t\t\t\t\t\t\t\t    KINO: " << ime_Kina << ", lokacija: " << lokacija_Kina << endl;
	cout << "\n\t\t\t\t\t\t\t        ************************************  " << endl;
	cout << "\t\t\t\t\t\t\t\t||          Dobro dosli u         ||" << endl;
	cout << "\t\t\t\t\t\t\t\t||         Cinestar Babino        ||" << endl;
	cout << "\t\t\t\t\t\t\t        ************************************  " << endl << endl;
	cout << "\t\t\t\t\t\t\t\t    ==============================" << endl;
	cout << "\t\t\t\t\t\t\t\t   |\t        MENU:             |" << endl;
	cout << "\t\t\t\t\t\t\t\t   |******************************|" << endl;
	cout << "\t\t\t\t\t\t\t\t   |                              |" << endl;
	cout << "\t\t\t\t\t\t\t\t   |  " << "(" << A << ") " << "@--> Spisak filmova     |" << endl;
	cout << "\t\t\t\t\t\t\t\t   |                              |"<< endl;
	cout << "\t\t\t\t\t\t\t\t   |  " << "(" << B << ") " << "@--> Pretraga filmova   |" << endl;
	cout << "\t\t\t\t\t\t\t\t   |                              |" << endl;
	cout << "\t\t\t\t\t\t\t\t   |  " << "(" << C << ") " << "@--> Kupovina karte     |" << endl;
	cout << "\t\t\t\t\t\t\t\t   |                              |" << endl;
	cout << "\t\t\t\t\t\t\t\t   |  " << "(" << D << ") " << "@--> Izlaz              |" << endl;
	cout << "\t\t\t\t\t\t\t\t   |                              |" << endl;
	cout << "\t\t\t\t\t\t\t\t    ==============================" << endl;
}

// Koristienje for petlje za prikaz dostupnih filmova

void KinoKarta::PogledajFilmove()
{

	Film* p_pogledaj_film = p_ListaFilmova;
	system("CLS");
	cout << endl
		<< "Filmovi koji su dostupni: " << endl
		<< "Cinestar Babino:" << endl
		<< "=========================" << endl << endl;

	for (int i = 0; i < filmovi; i++) 
	{
		cout << "Film koji se prikazuju u sali broj: " << i + 1 << ". je: " << endl;
		p_pogledaj_film->Display();
		++p_pogledaj_film;
	}
}

// Ova funkcija "pita" da se unese ime filma, pa korsiti Pronalazakfilma da dobije ponter, kako bi se moglo ispisati u Dispaly()

Film* KinoKarta::PretraziFilm()
{
	system("cls");
	system("color F4");
	string pretrazi_ime_filma;

	cout << "\t\t\t\t\t\t\t\t+----------------------------+" << endl;
	cout << "\t\t\t\t\t\t\t\t|\tPRETRAGA FILMA       |" << endl;
	cout << "\t\t\t\t\t\t\t\t+----------------------------+" << endl;

	cout << "\n\t\t\t\t\tMolimo vas unesite ime filma: ";
	cin.ignore();
	std::getline(std::cin, pretrazi_ime_filma);

	Film* p = PronalazakFilma(pretrazi_ime_filma);

	if (p != NULL) 
	{
		cout << "\n\t\t\t\t\tPronalazak filma je uspjesan!";
		p->Display();
	}
	else
	{
		Sleep(1000);
		cout << endl << "\n\t\t\t\t\tError :( " << endl;
		Sleep(750);
		cout << "\n\t\t\t\t\tPronalazak filma nije uspijesan." << endl << endl;
		return NULL;
	}
	return p;
}

// Ova funkcija korisiti objektFilma za pronalazak filma kojeg korisnik trazi
// Nakon toga koristi if petlju za da pronadje film i vraca pointer u objekat

Film* KinoKarta::PronalazakFilma(string pronadji_ime_filma)
{

	Film* p_pronadjiFilm = p_ListaFilmova;
	for (int i = 0; i < filmovi; i++) 
	{
		if (p_pronadjiFilm->getImeFilma() == pronadji_ime_filma) 
		{
			return p_pronadjiFilm;
		}
		else 
		{
			p_pronadjiFilm++;
		}
	}
	return NULL;
}

//Ova funkcija omogucava korisniku da odabere film koji ce gledati i koliko karata zeli kupiti
// Za obarcunavanje broja karata se koristi pointer uz pomoc f-je PronalazakFilma

void KinoKarta::KupiKartu()
{
	system("color F5");

	string kupovina_karteZaFilm;

	int UkupanBrKarti;
	system("CLS");

	cout << "\t\t\t\t\t\t\t\t+----------------------------+" << endl;
	cout << "\t\t\t\t\t\t\t\t|\tKUPOVINA KARTE       |" << endl;
	cout << "\t\t\t\t\t\t\t\t+----------------------------+" << endl;

	cout << "\n\n\t\t\t\t\t <> Molimo vas unesite ime filma: ";
	cin.ignore();
	std::getline(std::cin, kupovina_karteZaFilm);

	cout << "\n\t\t\t\t\t <> Unesite ukupan broj karata koji zelite kupiti: ";
	cin >> UkupanBrKarti;

	Film* p = PronalazakFilma(kupovina_karteZaFilm);

	if (p != NULL) 
	{
		double racun = p->KupovinaKarte(UkupanBrKarti);
		int broj = p-> getBrojDostupnihKarata();
		if (racun == -1) 
		{
			cout << "\n\t\t\t\tBroj dostupnih karata za ovaj film je: " << broj << endl;
		}
		else 
		{
			cout << "\n\t\t\t\t\t $ Vas racun iznosi: " << racun << endl;
		}
		cout << "\n\n\n\n\t\t\t\t";
		system("PAUSE");
		system("CLS");
	}
	else
	{
		cout << "Film nije pronadjen :(" << endl;
	}

}
