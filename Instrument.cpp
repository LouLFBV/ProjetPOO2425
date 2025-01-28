#include "Instrument.hpp"

Instrument::Instrument(string nom, string couleur, float frequence, float poids) : m_nom(nom), m_couleur(couleur), m_frequence(frequence), m_poids(poids)
{
}

Instrument::~Instrument()
{
}

string Instrument::GetNom() const
{
	return m_nom;
}

string Instrument::GetCouleur() const
{
	return m_couleur;
}

float Instrument::GetFrequence() const
{
	return m_frequence;
}

void Instrument::Afficher() const
{
	cout << "Instrument de couleur " << m_couleur << endl;
}

