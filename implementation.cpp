/*
 * implementation.cpp
 *
 *  Created on: 24 Aug 2014
 *      Author: sander
 */

#include <iostream>
#include <string.h>
#include "interface.hpp"

using namespace std;


void C_persoon::lees_persoon(){
		cout<<"geef naam :";
		cin>>naam;
		cout<<"geef cijfer :";
		cin>>cijfer;
}

void C_persoon::show_persoon(){
	cout<<naam<<" "<<cijfer<<endl;
}

void C_cijfers::vul_array(int *index){
	this->index=*index;
	cijferlijst[this->index].lees_persoon();
}

void C_cijfers::show_array(int *index){
	this->index=*index;
	cijferlijst[this->index].show_persoon();
}

double C_cijfers::gemiddelde_array(){
	for(int i=0;i<CIJFERLIJST_LEN;i++){
		gemiddelde+=cijferlijst[i].cijfer/CIJFERLIJST_LEN;
		}
	return gemiddelde;
}

int main(){

	C_cijfers klas;

	//vullen van de array cijferlijst met cijferlijst[index].naam,cijfer
	for(int i=0;i<CIJFERLIJST_LEN;i++){
		klas.vul_array(&i);
	}
	//weergeven van de inhoud van array cijferlijst
	for(int i=0;i<CIJFERLIJST_LEN;i++){
		klas.show_array(&i);
	}
	cout<<"gemiddelde is :"<<klas.gemiddelde_array()<<endl;

}
