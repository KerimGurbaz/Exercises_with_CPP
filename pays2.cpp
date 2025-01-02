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