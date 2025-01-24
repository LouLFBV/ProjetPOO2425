#ifndef PIANO_HPP
#define PIANO_HPP

#include<iostream>
#include<string>
#include "Instrument.hpp"

using namespace std;

class Piano : public Instrument
{
private:

	string m_nom;

public:

	Piano(string nom, string couleur);
	virtual ~Piano();

	virtual void Afficher() const override;
	virtual void JouerNotes(int rythme) const override;
	virtual int ChoisirRythme() const override;
	virtual void LirePartition() const override;
};

#endif