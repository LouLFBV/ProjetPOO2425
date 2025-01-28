#include "Piano.hpp"

Piano::Piano(string nom, string couleur, float frequence, float poids, int nombreDeTouche) : Instrument(nom, couleur, frequence, poids),m_nombreDeTouche(nombreDeTouche){}

Piano::~Piano(){}

void Piano::Afficher() const
{
	cout << "Piano de couleur " << m_couleur << ", " << m_nombreDeTouche << " touches, " << m_poids << " kg." << endl;
}

