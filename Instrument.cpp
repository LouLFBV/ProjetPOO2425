#include "Instrument.hpp"

Instrument::Instrument(string nom, string couleur) : m_nom(nom), m_couleur(couleur)
{
}

Instrument::~Instrument()
{
}

string Instrument::GetNom() const
{
    return m_nom;
}

string Instrument::GetCouleur() const
{
    return m_couleur;
}

void Instrument::Afficher() const
{
    cout << "Cet instrument est un " << m_nom << " de couleur " << m_couleur << endl;
}

void Instrument::JouerNotes(int rythme) const
{
    cout << "Taper sur les lettres (azertyui) pour jouer des notes (appuyer sur q pour arreter)." << endl;
    char note;
    while (true)
    {
        cin >> note;
        switch (note)
        {
        case 'a':
            cout << "DO" << endl;
            break;
        case 'z':
            cout << "RE" << endl;
            break;
        case 'e':
            cout << "MI" << endl;
            break;
        case 'r':
            cout << "FA" << endl;
            break;
        case 't':
            cout << "SOL" << endl;
            break;
        case 'y':
            cout << "LA" << endl;
            break;
        case 'u':
            cout << "SI" << endl;
            break;
        case 'i':
            cout << "DO" << endl;
            break;
        case 'q':
            return;
        }
    }
}

int Instrument::ChoisirRythme() const
{
    int rythme;
    cout << "Je choisis la vitesse du rythme de l'instrument." << endl;
    cout << "1. Rythme lent" << endl;
    cout << "2. Rythme moyen" << endl;
    cout << "3. Rythme rapide" << endl;
    do
    {
        cout << "> ";
        cin >> rythme;
    } while (rythme < 1 || rythme > 3);
    return rythme;
}

void Instrument::LirePartition() const
{
    cout << "Je lis la partition de l'instrument." << endl;

    //Beep(440, 500); // La 
    //Beep(494, 500); // Si
    //Beep(523, 500); // Do
    //Beep(587, 500); // R?
    //Beep(659, 500); // Mi
    //Beep(698, 500); // Fa
    //Beep(784, 500); // Sol

    Sleep(83);         // Silence 83 ms
    Beep(2637, 83);    // E7 - 2637 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2637, 83);    // E7 - 2637 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2093, 83);    // C7 - 2093 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2637, 83);    // E7 - 2637 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(3136, 83);    // G7 - 3136 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1568, 83);    // G6 - 1568 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2093, 83);    // C7 - 2093 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1568, 83);    // G6 - 1568 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1319, 83);    // E6 - 1319 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1760, 83);    // A6 - 1760 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1976, 83);    // B6 - 1976 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1865, 83);    // A#6 - 1865 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1760, 83);    // A6 - 1760 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1568, 111);   // G6 - 1568 Hz pendant 111 ms
    Sleep(111);        // Silence 111 ms
    Beep(2637, 111);   // E7 - 2637 Hz pendant 111 ms
    Sleep(111);        // Silence 111 ms
    Beep(3136, 111);   // G7 - 3136 Hz pendant 111 ms
    Sleep(111);        // Silence 111 ms
    Beep(3520, 83);    // A7 - 3520 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2794, 83);    // F7 - 2794 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(3136, 83);    // G7 - 3136 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2637, 83);    // E7 - 2637 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(166);        // Silence 166 ms
    Beep(2093, 83);    // C7 - 2093 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2349, 83);    // D7 - 2349 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1976, 83);    // B6 - 1976 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2093, 83);    // C7 - 2093 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1568, 83);    // G6 - 1568 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1319, 83);    // E6 - 1319 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1760, 83);    // A6 - 1760 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1976, 83);    // B6 - 1976 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1865, 83);    // A#6 - 1865 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1760, 83);    // A6 - 1760 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1568, 111);   // G6 - 1568 Hz pendant 111 ms
    Sleep(111);        // Silence 111 ms
    Beep(2637, 111);   // E7 - 2637 Hz pendant 111 ms
    Sleep(111);        // Silence 111 ms
    Beep(3136, 111);   // G7 - 3136 Hz pendant 111 ms
    Sleep(111);        // Silence 111 ms
    Beep(3520, 83);    // A7 - 3520 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2794, 83);    // F7 - 2794 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(3136, 83);    // G7 - 3136 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2637, 83);    // E7 - 2637 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2093, 83);    // C7 - 2093 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(2349, 83);    // D7 - 2349 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms
    Beep(1976, 83);    // B6 - 1976 Hz pendant 83 ms
    Sleep(83);         // Silence 83 ms     

    ifstream fichier("StarWars.txt");  //Ouverture d'un fichier en lecture

    if (fichier)
    {
        //L'ouverture s'est bien pass?e, on peut donc lire
        string ligne; //Une variable pour stocker les lignes lues

        while (getline(fichier, ligne)) // Tant qu'on n'est pas ? la fin, on lit
        {

        }
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
    }
}