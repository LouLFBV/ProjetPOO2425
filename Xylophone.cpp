#include "Xilophone.hpp"
#include "Xylophone.hpp"

Xylophone::Xylophone(string nom, string couleur) : Instrument(nom, couleur)
{
}

Xylophone::~Xylophone()
{
}

void Xylophone::Afficher() const
{
	cout << "Ceci est une xylophone." << endl;
}

void Xylophone::JouerNotes() const
{
}

void Xylophone::ChoisirRythme() const
{
}

void Xylophone::LirePartition() const
{
}
