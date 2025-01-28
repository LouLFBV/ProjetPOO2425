#ifndef GUITARE_HPP
#define GUITARE_HPP

#include "Instrument.hpp"

class Guitare : public Instrument
{
public:

	Guitare(string nom, string couleur, float frequence);
	virtual ~Guitare();

	virtual void Afficher() const override;
};

#endif