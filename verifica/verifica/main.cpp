#include <iostream>
#include<string>
#include "coda.h"
using namespace std;

struct pratiche {
	int codice;
	string cognome;
	string nome;
	char tipo;
	string descrizione;
};

int Menu() {
	int sceltaMenu;
	cout << "1) Inserisci una pratica" << endl;
	cout << "2) Estrai la pratica" << endl;
	cout << "3) Ricerca una pratica" << endl;
	cout << "4) Elimina una pratica" << endl;
	cin >> sceltaMenu;
	return sceltaMenu;
}

pratiche InputPratiche(){
	int codiceNumerico;
	string cognome;
	string nome;
	char tipo;
	string descrizione;

	cout << "Codice numerico: ";
	cin >> 
void InserirePratiche(coda<pratiche> &codaPratiche) {
	InputPratiche();
	/*prendi l'input, lo metti nel file*/
	cout << "spe";
}

void EstraiPratica(coda<pratiche> &codaPratiche) {
	/*è una dequeue, non mi sembra difficile*/
}

int SceltaRicerca() {
	int tipo;
	cout << "1) Ricerca per codice numero" << endl;
	cout << "2) Ricerca per tipo" << endl;
	cin >> tipo;
	return tipo;
}

int main() {
	int scelta = Menu();
	bool continuare = true;
	int sceltaContinuare;
	int tipo;
	coda<pratiche> codaPratiche;
	Init(codaPratiche);
	do {
		switch (scelta) {
		case 1:
			InserirePratiche(codaPratiche);
			break;
		case 2:
			EstraiPratica(codaPratiche);
			break;
		case 3:
			switch (SceltaRicerca()) {
			case 1:
				RicercaCodice(codaPratiche);
				break;
			case 2:
				RicercaTipo(codaPratiche);
				break;
			default:
				cout << "Errore nella scelta" << endl;
			}
			break;
		case 4:
			//EliminaPratica(codaPratiche);
		default:
			cout << "Scelta non corretta!"<< endl;
		}
		cout << "Continuare? 1=si 2=no. ";
		cin >> sceltaContinuare;

		if (sceltaContinuare == 2)
			continuare = false;
		cout << "Vuoi salvare? 1=si 2=no. ";
		cin >> sceltaContinuare;
		if (sceltaContinuare == 1)
			SalvaFile();
	} while (continuare == true);
}