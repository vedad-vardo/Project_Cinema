#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <string>
#include <Windows.h>
#include "Film.h"
const int filmovi = 8;

using namespace std;
class KinoKarta
{
private:
	Film* p_ListaFilmova;
	string ime_Kina;
	string lokacija_Kina;
public:
	KinoKarta();
	KinoKarta(string Kino_ime_kina, string Kino_lokacija_kina);
	~KinoKarta();
	void Init(Film* p_Kino_ListaFilmova, int velNiza);
	void Run();
	void DisplayMenu();
	void PogledajFilmove();
	Film* PretraziFilm();
	Film* PronalazakFilma(string pronadji_ImeFilma);
	void KupiKartu();
};

