//
// Created by Krm on 07.03.2025.
//
#include <iostream>
using namespace std;

/*
* int main() {
    cout << "Hello, World!" << std::endl;

    struct Coord {
        int x, y ,z;
    };

    struct Cercle {
        int rayon;
        Coord centre;
    };

    const Coord origine = {0, 0, 0};
    Cercle cercle = {1, {2,3,4}};
    Cercle *ptr = &cercle;
    cout << (*(&cercle)).rayon<<endl;;



    cout<<cercle.rayon<<endl;
    cercle.centre =origine;

    return 0;
}

 */
struct Date {

    int jour, mois, annee;
};

struct Personne {

    string nom;
    string adresse;
    Date anniversaire;
};

void afficher_personne(const Personne &p) {
    std::cout << "Nom          : " << p.nom << std::endl;
    std::cout << "Adresse      : " << p.adresse << std::endl;
    std::cout << "Anniversaire : "
              << p.anniversaire.jour << "."
              << p.anniversaire.mois << "."
              << p.anniversaire.annee << std::endl;
}

int main() {
    // Création et initialisation d'une instance de Personne (pour la Question 4)
    Personne p = {"Anna", "Yverdon", {30, 10, 2023}};
    std::cout << "Informations de la personne (Question 4) :" << std::endl;
    afficher_personne(p);
    std::cout << std::endl;

    // Création d'un tableau de 3 éléments de type Personne
    Personne personnes[3] = {
        {"Anna",    "Yverdon", {30, 10, 2023}},
        {"Bob",     "Lausanne", {15, 5, 1990}},
        {"Charlie", "Genève",   {1, 1, 1985}}
    };

    std::cout << "Informations des personnes (Tableau de structs) :" << std::endl;

    // Parcours du tableau et affichage des informations pour chaque personne
    for (int i = 0; i < 3; i++) {
        std::cout << "Personne " << i + 1 << ":" << std::endl;
        afficher_personne(personnes[i]);
        std::cout << std::endl;
    }

    return 0;
}

