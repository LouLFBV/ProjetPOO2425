#ifndef INSTRUMENT_HPP
#define INSTRUMENT_HPP

#include<iostream>
#include<string>

using namespace std;

class Instrument
{
protected:

	string m_nom;
	string m_couleur;

public:

	Instrument(string nom, string couleur);
	virtual ~Instrument();

	string GetNom() const;
	string GetCouleur() const;

	virtual void Afficher() const;
	virtual void JouerNotes() const;
	virtual void ChoisirRythme() const;
	virtual void LirePartition() const;
};

#endif