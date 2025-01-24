#ifndef PIANO_HPP
#define PIANO_HPP

#include<iostream>
#include<string>
#include "Instrument.hpp"

using namespace std;

class Piano : public Instrument
{
private:

public:

	Piano(string nom, string couleur, float frequence);
	virtual ~Piano();

	virtual void Afficher() const override;
	/*virtual void JouerNotes(int rythme) const override;
	virtual int ChoisirRythme() const override;
	virtual void LirePartition(map<string, int> pp) const override;*/
};

#endif