#ifndef PIANO_HPP
#define PIANO_HPP

#include "Instrument.hpp"


class Piano : public Instrument
{
public:

	Piano(string nom, string couleur, float frequence);
	virtual ~Piano();

	virtual void Afficher() const override;
};

#endif