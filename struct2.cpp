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

include <iostream>
#include <string>

struct Date {
    int jour;
    int mois;
    int annee;
};

struct Personne {
    string nom;
    string adresse;
    Date anniversaire;
};

void afficher_personne(const Personne &p) {
    cout<<p.nom<<endl;
    cout<<p.adresse<<endl;
    cout<<p.anniversaire.jour<<"."
    <<p.anniversaire.mois<<"."
    <<p.anniversaire.annee<<endl;
}

int main() {
    Personne p = {"Kerim", "Gurbaz", {29, 19, 1987}};
    cout<<"Informations de la personne"<<endl;
    afficher_personne(p);
    cout<<endl;

    Personne personnes[3] = {
        {"Anna",    "Yverdon", {30, 10, 2023}},
        {"Bob",     "Lausanne", {15, 5, 1990}},
        {"Charlie", "Genève",   {1, 1, 1985}}
    };

    cout<<"Informations des personnes (Tableau de structs)"<<endl;

    for(int i =0; i<3 ; ++i) {
        cout<<"Personne"<<i + 1<<": "<<endl;
        afficher_personne(personnes[i]);
        cout<<endl;

    }



    return 0;
}
#include <iostream>
#include <cstdint> //Pour uint8_t et uuint16_t
using namespace std;

struct Date {
    uint8_t jour;
    uint16_t mois;
    uint16_t annee;
};

bool est_bissextile(Date date) {
    if(date.annee %400 == 0) {
        return true;
    }else if(date.annee % 4 ==0 && date.annee % 100 != 0) {

        return true;
    }else {
        return false;
    }
}

int main() {
    Date date1 = {29, 2, 2024};
    Date date2 = {15, 3, 2023};
    Date date3 = {29, 2, 1900};
    Date date4 = {29, 2, 2000};

    cout << "2024 est bissextile : " << est_bissextile(date1) <<endl;
    cout << "2023 est bissextile : " << est_bissextile(date2) <<endl;
    cout << "1900 est bissextile : " << est_bissextile(date3) <<endl;
    cout << "2000 est bissextile : " << est_bissextile(date4) <<endl;

}#include <iostream>
#include <string>

struct Livre {
    string titre;
    string auteur ;
    int nbPages;
};

int main() {
Livre monLivre = {"Le Petit Prince", "Antoine de Saint-Exupery", 96};
    cout<<monLivre.titre<<endl;
    cout<<monLivre.auteur<<endl;
    cout<<monLivre.nbPages<<endl;

    return 0;
}struct Point {
    int x;
    int y;
};

int main() {
    Point p ={35, 28};

    Point point = {2016, 2020};

    cout<<p.x<<endl;
    cout<<p.y<<endl;
    cout<<point.x<<endl;
    cout<<point.y<<endl;


    Point xy;

    xy.x =233131;
    xy.y = 3892873;

    cout<<    xy.x<<endl;
    cout<<    xy.y<<endl;

    return 0;
}

 */

struct Date {
    int jour, mois, annee;
};

bool est_bissextile(const Date &d) {

    if(d.annee %400 == 0) {
        return true;
    }else if(d.annee % 4 == 0 && d.annee %100 != 0) {
        return true;
    }else {
        return false;
    }
}

int main() {

    Date d1 = {29, 10, 0};
    Date d2 = {29, 10, 1920};
    Date d3 = {29, 10, 1900};
    Date d4 = {29, 10, 2025};

    cout<<est_bissextile(d1)<<endl;
    cout<<est_bissextile(d2)<<endl;
    cout<<est_bissextile(d3)<<endl;
    cout<<est_bissextile(d4)<<endl;





    return 0;
}
