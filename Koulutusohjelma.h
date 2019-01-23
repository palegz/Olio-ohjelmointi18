#pragma once
#include <string>
#include <vector>
#include "Opiskelija.h"
#include "Opettaja.h"


class Koulutusohjelma {
public:
	Koulutusohjelma();
	Koulutusohjelma(string nimi);
	~Koulutusohjelma();

	void asetaNimi(string nimi);
	string annaNimi() const;

	void lisaaOpettaja();
		//kysyy opettajan tiedot käyttäjältä ja lisää opettajaolion opettajat_ - vectoriin
	void lisaaOpiskelija();
		//kuten edellinen, mutta operoidaan opiskelijalla
	void tulostaOpettajat() const;
		//tulostaa opettajat_ vectorin sisällön näytölle
	void tulostaOpiskelijat() const;
		//kuten edellinen, mutta tulostetaan opiskelijat vectorista.
	void tulosta() const;
	void kysyKoulutusohjelma();
private: 
	std::string nimi_;
	std::vector <Opiskelija> opiskelijat_;
	std::vector <Opettaja> opettajat_;
};