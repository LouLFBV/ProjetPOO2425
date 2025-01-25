#include "Xylophone.hpp"

Xylophone::Xylophone(string nom, string couleur, float frequence) : Instrument(nom, couleur,frequence)
{
}

Xylophone::~Xylophone()
{
}

void Xylophone::Afficher() const
{
	cout << "Ceci est un xylophone de couleur " << m_couleur << "." << endl;
}

