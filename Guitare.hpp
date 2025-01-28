#ifndef GUITARE_HPP
#define GUITARE_HPP

#include "Instrument.hpp"

class Guitare : public Instrument
{
private :

	int m_nombreDeCorde;

public:

	Guitare(string nom, string couleur, float frequence, float poids, int nombreDeCorde);
	virtual ~Guitare();

	virtual void Afficher() const override;
};

#endif