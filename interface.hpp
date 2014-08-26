/*
 * interface.hpp
 *
 *  Created on: 24 Aug 2014
 *      Author: sander
 */

#define NAAM_LEN 20
#define CIJFERLIJST_LEN 3

class C_persoon{

public:
	char naam[NAAM_LEN];
	int cijfer;

public:
	void lees_persoon();
	void show_persoon();
};

class C_cijfers{

public:
	int index;
	double gemiddelde;
	C_persoon cijferlijst[CIJFERLIJST_LEN]; //array van het type C_persoon. Mogelijke opties: naam, cijfer, leespersoon()

public:
	void vul_array(int *index);//methode om een C_persoon array te vullen
	void show_array(int *index);//methode om de inhoud van cijferlijst weer te geven
	double gemiddelde_array();// methode om het gemiddelde uit te rekenen
};
