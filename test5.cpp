#include <iostream>
#include <string>
#include <vector>
using namespace std;


// Définition de la class Pays

class Pays{
private:
    string nom;
    double population ; // en million d'habitants
    double superficie; // en km carrée

    public:
    //Constructeur
    Pays(string n, double p, double s) : nom(n), population(p), superficie(s){}

// Acceseurs
string getNom() const{return nom;}
double getPopulation() const{return population;}
double getSuperficie() const{return superficie;}

double densite() const {
    return population / superficie;
}
};

int main(){
vector<Pays> paysList;
paysList.emplace_back("Suisse", 8.6, 41285);
paysList.emplace_back("France", 67.0, 643803);
paysList.emplace_back("Allemagne", 83.2, 357386);
paysList.emplace_back("Espagne", 47.4, 505990);
paysList.emplace_back("Italie", 60.4, 301340);

//Variables pour stocker les résultats
Pays* plusGrandeSuperficie = &paysList[0];
Pays* plusPeuple = &paysList[0];
Pays* plusHauteDensite = &paysList[0];

//Parcourir la liste pour trouver les pays recherchés

for(auto &p : paysList){
    if(p.getSuperficie() > plusGrandeSuperficie -> getSuperficie()){
        plusGrandeSuperficie = &p;
    }

    if(p.getPopulation()  > plusPeuple -> getPopulation()){
        plusPeuple = &p;
    }

    if(p.densite() > plusHauteDensite -> densite()){
        plusHauteDensite = &p;
    }
}

//Afiicher les résultats

cout<<"Pays ayant la plus grande superficie : "<<plusGrandeSuperficie -> getNom()
<<" (" << plusGrandeSuperficie -> getSuperficie() << "km carree)"<<endl;


cout<<"Pays le plus grande peuple : "<<plusGrandeSuperficie -> getNom()
<<" (" << plusPeuple ->  getPopulation() << "millions d'habitants)"<<endl;

cout<<"Pays ayant la densite de population la plus elevee :  "
<<plusHauteDensite->getNom()
<<" (" << plusHauteDensite->densite() << " millions/km  carre)" << std::endl;


return 0;
}
