//
// Created by Krm on 30/12/2024.
//


#include <iostream>
#include <vector>
using namespace std;
using Data = double;
using Ligne = vector<Data>;
using Matrice = vector<Ligne>;

//fonction generique- pour le calcul total
template <typename T>
T calculerSomme(const vector<T>& v) {
        T somme = 0;
        for(const T& val : v) {
                somme += val;
        }
        return somme;
}


//fonction générique - pour le calcul de la moyenne
template<typename T>
T calculerMoyenne(const vector<T>& v) {
        if(v.empty()) {
                return 0;//pour un vecteur vide, la moyenne est accepté comme 0.
        }
        return calculerSomme(v) / v.size();
}

// fonction generique pour imprimer le vecteur

template<typename T>
void afficherVecteur(const vector<T>& v) {
        cout<<"[";
        for(size_t i = 0; i< v.size(); ++i) {
                cout<<v[i] << (i<v.size() - 1 ? ", " : "");

        }
        cout<<"]"<<endl;
}

template<typename T>
vector<T> calculerSommeOuMoyenne(const vector<vector<T>>& matrice, int operation) {
        vector<T> resultat;
        for(const auto& ligne : matrice) {
                if(operation == 0) {
                        resultat.push_back(calculerSomme(ligne));
                }else if(operation ==1) {
                        resultat.push_back(calculerMoyenne(ligne));
                }else {
                        cerr<<"Operation invalide!"<<endl;
                        return vector<T>(); //returne un vecteur vide en cas d'erreur
                }
        }

        return resultat;
}

int main() {
        const Matrice notes {{4.0, 5.0, 6.0},  // Jean
                       {4.1, 5.1, 4.8},  // Marie
                       {3.5, 4.1     },  // Joshua
                       {4.5, 4.5, 4.6}}; // Ali

        //Calculer et imprimer les totaux
        vector<Data> sommes =  calculerSommeOuMoyenne(notes, 0);
        cout << "somme   : ";
        afficherVecteur(sommes);

        // Calculer et imprimer des moyennes
        vector<Data> moyennes = calculerSommeOuMoyenne(notes, 1);
        cout << "moyenne : ";
        afficherVecteur(moyennes);

        return 0;
}


/*
* #include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

using Data = double;

using Ligne  = vector<Data>;

using Matrice = vector<Ligne>;

const Matrice notes {
        {4.0, 5.0, 6.0},  // Jean
        {4.1, 5.1, 4.8},  // Marie
        {3.5, 4.1},       // Joshua
        {4.5, 4.5, 4.6}   // Ali
};

template <typename Container>
double sum(const Container& container) {
        double total = 0.0;

        for(const auto& element : container) {
                total += element;
        }
        return total;
}

template<typename Container>
double average(const Container& container) {
        if(container.empty()) return 0.0;
        return sum(container) / static_cast<double>(container.size());
}





int main() {
        vector<double> sums;
        vector<double> averages;

        //Calculer le total et la moyenne pour chaque ligne
        for(const auto& ligne : notes) {
                sums.push_back(sum(ligne));
                averages.push_back(average(ligne));
        }

        //imprimer les totaux à l'écran
        cout<<"somme : [";
        for(size_t i = 0; i < sums.size(); ++i) {
                cout<<sums[i];
                if(i < sums.size() -1)cout<<", ";
        }
        cout<<"]\n";

        //imprimer les moyennes à l'écran
        cout<<"moyenne : [";
        for(size_t i = 0; i < averages.size(); ++i) {
                cout<<fixed<<setprecision(2)<<averages[i];
                if(i < averages.size() - 1) cout<<", ";
        }
        cout<<"]\n";

        return 0;
}
 */