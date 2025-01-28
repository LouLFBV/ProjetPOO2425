#include "Flute.hpp"

Flute::Flute(string pNom, string pCouleur, float frequence) : Instrument(pNom, pCouleur, frequence) {

}

Flute::~Flute() {}


void Flute::Afficher() const
{
    std::cout << "Cet instrument est un " << m_nom << " de couleur " << m_couleur << endl;
}
