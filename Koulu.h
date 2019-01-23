#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Koulutusohjelma.h"

using std::vector; using std::string;


class Koulu {
public:

		Koulu();
		Koulu(string nimi);
		~Koulu();
		string annaNimi();
		void lisaaKoulutusohjelma();
		void lisaaKoulutusohjelmaanOpettaja();
		void lisaaKoulutusohjelmaanOpiskelija();
		void tulostaKoulutusohjelmat() const;
		void tulostaKoulutusohjelmienMaara() const;
		void tulostaKoulutusohjelmanOpiskelijat() const;
		void tulostaKoulutusohjelmanOpettajat() const;
		void poistaKoulutusohjelma();

private:
	int etsiKoulutusohjelma() const;
	string nimi_;
	vector <Koulutusohjelma> koulutusohjelmat_;


};