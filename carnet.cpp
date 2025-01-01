//
// Created by Krm on 01/01/2025.
//
#include <iostream>
#include <array>
#include <string>

using namespace std;

// definition de la structure Date;
struct Date {
    int jour;
    int mois;
    int annee;
};

//Définition de la structure Personne;
struct Personne {
    string prenom;
    string nom;
    Date date;
};

//surcharge de l'operateur << pour afficher une date;
ostream& operator<<(ostream& os, const Date& date) {
    os<<date.jour<<"."<<date.mois<<"."<<date.annee;
    return os;
}

//Surcharge de loperation << pour afficher une personne;
ostream& operator<<(ostream& os, const Personne& personne) {
    os<<personne.prenom<<"\n";
    os<<personne.nom<<"\n";
    os<<personne.date<<"\n";
}

int main() {
    array<Personne, 4> carnet{
        Personne{"Jean"s,   "Veuxplus"s, Date{7,  4, 1975}},
               Personne{"Alain"s,  "Verse"s,    Date{21, 12, 2018}},
               Personne{"Justin"s, "Ptipeu"s,   Date{1,  8, 2023}},
               Personne{"Rémi"s,   "Fasol"s,    Date{17,  5, 1957}}

    };

    //Affichage du carnet d'adresses
    for(const auto& personne : carnet) {
        cout<<personne;
    }


    return 0;
}