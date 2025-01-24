#ifndef INSTRUMENT_HPP
#define INSTRUMENT_HPP

#include<iostream>
#include<string>
#include<fstream>
#include <windows.h>

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
	virtual void JouerNotes(int rythme) const;
	virtual int ChoisirRythme() const;
	virtual void LirePartition() const;
};

#endif