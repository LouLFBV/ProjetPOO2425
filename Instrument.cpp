#include "Instrument.hpp"

Instrument::Instrument(string nom, string couleur, float frequence) : m_nom(nom), m_couleur(couleur), m_frequence(frequence)
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
	cout << "Cet instrument est un " << m_nom << " de couleur " << m_couleur << endl;
}

