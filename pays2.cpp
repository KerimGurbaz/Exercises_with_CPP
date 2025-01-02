//
// Created by Krm on 02/01/2025.
//
#include <iostream>
#include <string>
#include <vector>
#include <limits>
using namespace std;

class Pays {
private:
    string nom;
    double population;
    double superficie;

public :
    Pays(string nom_pays, double pop, double sup): nom(nom_pays), population(pop), superficie(sup){}

    string getNom() const {
    return nom;
}
    double getPopulation() const {
    return population;
}
    double setSuperficie() const {
    return superficie;
}

    //Methode pour calculer la densite de population(habitants par km)
    double densite()const {
    if(superficie == 0) {
        return 0;// eviter la divition pas zero
    }
    return (population * 1000000)/ superficie;
}
};


int main() {
    // creation d'une liste de pays
    vector<Pays> p;
    p.emplace_back("Suisse", 8.121830, 41290);
    p.emplace_back("France", 66.663766, 547030);
    p.emplace_back("Italie", 61.855120, 301230);
    p.emplace_back("Allemagne", 80.854408, 357021);


    string plus_grande_superficie ="";
    string plus_peuple = "";
    string plus_grande_densite ="";

    double max_superficie = -1.0;
    double max_population = -1.0;
    double max_densite = -1.0;

    //Parcourir la liste des pays pour trouver les résultats
    for(const auto& pays : p) {

    }







    return 0;

}






/*
* class Pays {
private:
    string nom;
    double population;
    double superficie;

public:
    Pays(string nom_pays, double population_pays, double superficie_pays):nom(nom_pays), population(population_pays), superficie(superficie_pays){}

    string getNom() const {
        return nom;
    }

    double getSuperficie() const {
        return superficie;
    }

    double getPopulation() const {
        return population;
    }

    double getDensite() const{
        return population *1000000/ superficie;
    }
};

int main() {
    vector<Pays> pays = {
        Pays("Suisse", 8.121830, 41290),
         Pays("France", 66.663766, 547030),
         Pays("Italie", 61.855120, 301230),
         Pays("Allemagne", 80.854408, 357021)

    };

    Pays* paysPlusGrandeSuperficie = &pays[0];
    Pays* paysPlusPeuple = &pays[0];
    Pays* paysPlusGrandeDensite = &pays[0];

    for(size_t i = 1; i<pays.size(); ++i) {
        if(pays[i].getSuperficie() > paysPlusGrandeSuperficie -> getSuperficie()) {
            paysPlusGrandeSuperficie = &pays[i];
        }
        if(pays[i].getPopulation() > paysPlusPeuple -> getPopulation()) {
            paysPlusPeuple = &pays[i];
        }
        if(pays[i].getDensite() > paysPlusGrandeDensite -> getDensite()) {
            paysPlusGrandeDensite = &pays[i];
        }
    }
    cout << "Pays ayant la plus grande superficie               : " << paysPlusGrandeSuperficie->getNom() << endl;
    cout << "Pays ayant le plus d'habitants                     : " << paysPlusPeuple->getNom() << endl;
    cout << "Pays ayant la densite de population la plus grande : " << paysPlusGrandeDensite->getNom() << endl;

    return 0;
}
 */