#ifndef XYLOPHONE_HPP
#define XYLOPHONE_HPP

#include "Instrument.hpp"


class Xylophone : public Instrument
{
private:

	int m_nombreDeLamelle;

public:

	Xylophone(string nom, string couleur, float frequence, float poids, int nombreDeLamelle);
	virtual ~Xylophone();

	virtual void Afficher() const override;
};

#endif