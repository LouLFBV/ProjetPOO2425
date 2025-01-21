#ifndef GUITARE_HPP
#define GUITARE_HPP

#include<iostream>
#include<string>
#include "Instrument.hpp"

using namespace std;

class Guitare : public Instrument
{
private:

	string m_nom;

public:

	Guitare(string nom, string couleur);
	virtual ~Guitare();

	virtual void Afficher() const override;
	virtual void JouerNotes() const override;
	virtual void ChoisirRythme() const override;
	virtual void LirePartition() const override;
};

#endif
