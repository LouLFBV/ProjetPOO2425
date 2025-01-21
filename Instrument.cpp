#include "Instrument.hpp"

Instrument::Instrument(string nom, string couleur) : m_nom(nom), m_couleur(couleur)
{
}

Instrument::~Instrument()
{
}

void Instrument::Afficher() const
{
	cout << "Cet instrument est un " << m_nom << " de couleur " << m_couleur << endl;
}

void Instrument::JouerNotes() const
{
}

void Instrument::ChoisirRythme() const
{
}

void Instrument::LirePartition() const
{
}