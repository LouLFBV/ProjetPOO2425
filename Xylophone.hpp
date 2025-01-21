#ifndef XYLOPHONE_HPP
#define XYLOPHONE_HPP

#include<iostream>
#include<string>
#include "Instrument.hpp"

using namespace std;

class Xylophone : public Instrument
{
private:

	string m_nom;

public:

	Xylophone(string nom, string couleur);
	virtual ~Xylophone();

	virtual void Afficher() const override;
	virtual void JouerNotes(int rythme) const override;
	virtual int ChoisirRythme() const override;
	virtual void LirePartition() const override;
};

#endif