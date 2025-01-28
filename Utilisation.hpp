#ifndef UTILISATION_HPP
#define UTILISATION_HPP


#include "Xylophone.hpp"
#include "Guitare.hpp"
#include "Piano.hpp"
#include "Flute.hpp"
#include "Triangle.hpp"
#include "Maracas.hpp"
#include "Theremine.hpp"
#include"Instrument.hpp"


vector<shared_ptr<Instrument>> Instruments();

void JouerNotes(shared_ptr<Instrument> instrument, float rythme);

float ChoisirRythme();

void LirePartition(shared_ptr<Instrument>instrument, map<string, int>note_to_frequency, float rythme, string partition);

int Affichage(vector<shared_ptr<Instrument>> instruments);

float ChoixRythme(vector<shared_ptr<Instrument>> instruments, int choixInstrument, string action);

int ChoixAction(shared_ptr<Instrument>instrument, vector<shared_ptr<Instrument>> instruments, int choixInstrument);

#endif 