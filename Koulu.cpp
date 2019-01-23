#include "Koulu.h"
#include <iostream>
#include "Koulutusohjelma.h"

using std::endl; using std::cout; using std::cin; using std::getline;

Koulu::Koulu():nimi_(), koulutusohjelmat_()
{
}

Koulu::Koulu(string nimi) : nimi_(), koulutusohjelmat_()
{
}

Koulu::~Koulu()
{
}
void Koulu::lisaaKoulutusohjelma()
{
	Koulutusohjelma tvt;
	tvt.kysyKoulutusohjelma();
	koulutusohjelmat_.push_back(tvt);
}
void Koulu::tulostaKoulutusohjelmat() const
{
	cout << nimi_ << "koulutusohjelmat: " << endl;
	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
		koulutusohjelmat_[i].tulosta();
	}
}
void Koulu::tulostaKoulutusohjelmienMaara() const
{
	cout << "Koulutusalojen maara on: " <<  koulutusohjelmat_.size() << endl;
}
void Koulu::lisaaKoulutusohjelmaanOpettaja() 
//kysyy ensin koulutusohjelman nimen ja lisää sitten oikeaan koulutusohjelmaan opettajan.Opettajan tiedot kysytään käyttäjältä
{
	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0) {
		koulutusohjelmat_[indeksi].lisaaOpettaja();
	}
	else
	cout << "Koulutusohjelmaa ei loytynyt!?" << endl;
}
void Koulu::lisaaKoulutusohjelmaanOpiskelija()
{
	cout << "Mihin koulutusohjelmaan haluat lisata opiskelijan?" << endl;
	getline(cin, nimi_);
	Koulutusohjelma nimi_;
	nimi_.lisaaOpiskelija();

}
void Koulu::tulostaKoulutusohjelmanOpiskelijat() const
{
	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0) {
		cout << "Koulutusohjelman Opiskelijat: " << endl;
		koulutusohjelmat_[indeksi].tulostaOpiskelijat();
	}
	else
		cout << "Koulutusohjelmaa ei loytynyt!?" << endl;

}
void Koulu::tulostaKoulutusohjelmanOpettajat() const
{

	int indeksi = etsiKoulutusohjelma();
	if (indeksi >= 0) {
		cout << "Koulutsohjelman opettajat on : " << endl;
		koulutusohjelmat_[indeksi].tulostaOpettajat();
	}
	else
		cout << "Koulutusohjelmaa ei loytynyt!?" << endl;
}


int Koulu::etsiKoulutusohjelma() const
{
	string nimi;
	cout << "Anna koulutusohjelman nimi:  ";
	getline(cin, nimi);
	for (unsigned int i = 0; i < koulutusohjelmat_.size(); i++) {
		if (nimi == koulutusohjelmat_[i].annaNimi()) {
			return i;
		}
	}
	return -1; //ei löytynyt
}
