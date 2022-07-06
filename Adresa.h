#pragma once
class Adresa
{
public:
	Adresa();
	void setUlica();
	void setBroj();
	void setGrad();
	char* getUlica();
	char* getBroj();
	char* getGrad();
	void unesiAdresu();
	bool pretragaPoUlici(char* u);
	~Adresa();
private:
	char ulica[100], broj[5], grad[50];
};
