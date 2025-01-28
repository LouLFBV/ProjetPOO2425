#ifndef PIANO_HPP
#define PIANO_HPP

#include "Instrument.hpp"


class Piano : public Instrument
{
private:

	int m_nombreDeTouche;

public:

	Piano(string nom, string couleur, float frequence, float poids, int nombreDeTouche);
	virtual ~Piano();

	virtual void Afficher() const override;
};

#endif