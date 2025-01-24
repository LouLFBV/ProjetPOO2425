#ifndef XYLOPHONE_HPP
#define XYLOPHONE_HPP

#include<iostream>
#include<string>
#include "Instrument.hpp"

using namespace std;

class Xylophone : public Instrument
{
private:


public:

	Xylophone(string nom, string couleur, float frequence);
	virtual ~Xylophone();

	virtual void Afficher() const override;
	/*virtual void JouerNotes(int rythme) const override;
	virtual int ChoisirRythme() const override;
	virtual void LirePartition(map<string, int> pp) const override;*/
};

#endif