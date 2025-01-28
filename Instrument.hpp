#ifndef INSTRUMENT_HPP
#define INSTRUMENT_HPP

#include<iostream>
#include<string>
#include<fstream>
#include <windows.h>
#include<vector>
#include<map>
#include<memory>

using namespace std;

class Instrument
{
protected:

	string m_nom;
	string m_couleur;
	float m_frequence;
	float m_poids;

public:

	Instrument(string nom, string couleur, float frequence, float poids);
	virtual ~Instrument();

	string GetNom() const;
	string GetCouleur() const;
	float GetFrequence() const;

	virtual void Afficher() const;
};

#endif