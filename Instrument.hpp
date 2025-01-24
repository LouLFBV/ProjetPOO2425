#ifndef INSTRUMENT_HPP
#define INSTRUMENT_HPP

#include<iostream>
#include<string>
#include<fstream>
#include <windows.h>
#include<vector>
#include<map>

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
	virtual void JouerNotes(float rythme) const;
	virtual float ChoisirRythme() const;
	virtual void LirePartition(map<string,int> pp, float rythme, string partition) const;
};

#endif