#ifndef GUITARE_HPP
#define GUITARE_HPP

#include "Instrument.hpp"

using namespace std;

class Guitare : public Instrument
{
private:


public:

	Guitare(string nom, string couleur, float frequence);
	virtual ~Guitare();

	virtual void Afficher() const override;
};

#endif