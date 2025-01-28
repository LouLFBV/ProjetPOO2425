#include "Piano.hpp"

Piano::Piano(string nom, string couleur, float frequence) : Instrument(nom, couleur, frequence){}

Piano::~Piano(){}

void Piano::Afficher() const
{
	cout << "Piano de couleur " << m_couleur << "."  << endl;
}

