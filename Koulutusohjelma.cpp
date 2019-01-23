#include "Koulutusohjelma.h"
#include <iostream>
using std::endl; using std::cout; using std::cin; using std::getline;

Koulutusohjelma::Koulutusohjelma():nimi_(), opiskelijat_(), opettajat_()
{

}

Koulutusohjelma::Koulutusohjelma(string nimi): nimi_(nimi), opiskelijat_(), opettajat_()
{
}

Koulutusohjelma::~Koulutusohjelma()
{
}

void Koulutusohjelma::asetaNimi(string nimi)			//setteri
{
	nimi_ = nimi;
}

string Koulutusohjelma::annaNimi() const			//getteri CONST
{
	return nimi_;
}

void Koulutusohjelma::lisaaOpettaja()
{
	Opettaja ope;
	ope.kysyTiedot();
	opettajat_.push_back(ope);


}

void Koulutusohjelma::lisaaOpiskelija()
{
	Opiskelija vladimir;
	vladimir.kysyTiedot();
	opiskelijat_.push_back(vladimir);

}

void Koulutusohjelma::tulostaOpettajat() const
{
	for (unsigned int i = 0; i < opettajat_.size(); i++) {
		opettajat_[i].tulosta();
	}
}

void Koulutusohjelma::tulostaOpiskelijat() const
{
	for (unsigned int i = 0; i < opiskelijat_.size(); i++) {
		opiskelijat_[i].tulosta();
	}

}

void Koulutusohjelma::tulosta() const
{
	cout << nimi_ << endl;
}

void Koulutusohjelma::kysyKoulutusohjelma()
{
	cout << "Anna koulutusala: " << endl;
	getline(cin, nimi_);
} 
