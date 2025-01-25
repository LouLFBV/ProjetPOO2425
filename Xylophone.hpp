#ifndef XYLOPHONE_HPP
#define XYLOPHONE_HPP

#include "Instrument.hpp"


class Xylophone : public Instrument
{
private:


public:

	Xylophone(string nom, string couleur, float frequence);
	virtual ~Xylophone();

	virtual void Afficher() const override;
};

#endif