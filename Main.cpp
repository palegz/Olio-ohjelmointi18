//4.10.2018 tunnin demoja/harjoituksi, harjoitustyön alku myös tässä.	
//TÄSTÄ OHJELMASTA JATKAA HARJOITUSTYÖTÄ
//	cout << "Olio-ohjelmoinnin harkkatyo, Pauli Manty Marraskuu 2018." << endl;

#include<iostream>
#include"Sovellus.h"
using namespace std;

int main() {
	
	//mainissa lähdetään kutsumaan sovellus oliota joka pyörittää muut oliot ohjelmakokonaisuudeksi


	Sovellus amk("TAMK");
	amk.aja();


	system("pause");
	return 0;
}