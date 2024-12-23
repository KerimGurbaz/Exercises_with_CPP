//
// Created by Krm on 23/12/2024.
//



/*
#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
* template<typename T>
vector<typename vector<T>::const_iterator> vect_iter_val(const vector<T>& vec, const T& val) {
    vector<typename vector<T>::const_iterator> result;// vecteur pour stocker les iterateurs
    for(auto it = vec.begin(); it != vec.end() ; ++it) {
        if(*it == val) {// si la valeur pointe par iterateur est egale a la value
            result.push_back(it);
        }
    }
    return result;  // Retourne le vecteur d'iterateurs
}

int main() {
    const vector<int> v = {1, 2, 3, 2, 4, 2, 2, 6, 2};

    int valToSearch = 2;

    vector<vector<int>::const_iterator> iters =  vect_iter_val(v, valToSearch);

    cout<<"vecteur d'entiers :";
    for(int x : v) {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"Vecteur d'iterateurs : ";
    for(auto it: iters) {
        cout<<*it<<" "; // affichela caleur pointée par chaque iterateur
    }cout<<endl;

    cout<<"Positions : ";
    for(auto it : iters) {
        cout<<distance(v.begin(), it )<< " "; // Affiche la position de chaque iterateur
    }

}
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


template<typename T>
vector<typename vector<T>::const_iterator> vec_iter_val(const vector<T> & vecteur, const T& valeurRechercee) {
    vector<typename vector<T>::const_iterator> vectorIterateurs;

    // Itérateur pour parcourir le vecteur
    auto it = vecteur.cbegin();

    // Boucle pour trouver toutes les occurrences de 'valeurRecherchee'

    while(it != vecteur.cend()) {
        it = find(it, vecteur.cend(), valeurRechercee);
        if(it != vecteur.cend()) {
            vectorIterateurs.push_back(it);
            ++it;
        }
    }

    return vectorIterateurs;
    }

int main() {
    // Déclaration d'un vecteur constant d'entiers
    const vector<int> v {1, 2, 3, 2, 4, 2, 2, 6, 2};

    // valeurà rechercher
    int valeur = 2;

    //Appel de la fonction vec_iter
    vector<vector<int>::const_iterator> vecIterateurs = vec_iter_val(v, valeur );

    //Affichage des resultats
    cout<<"Vecteur d'entiers: [";
    for(size_t i =0; i < v.size(); ++i) {
        cout<<v[i];
        if(i != v.size() -1 ) cout<<", ";
    }
    cout<<"]";

    cout << "Vecteur d'itérateurs pointant vers la valeur " << valeur << " : [";
    for(size_t i = 0; i < vecIterateurs.size(); ++i) {
        cout<<*(vecIterateurs[i]);
        if(i != vecIterateurs.size()- 1 )cout<<", ";
    }
    cout<<"]"<<endl;

    // Optionnel : Afficher les indices des itérateurs trouvés

    cout << "Indices des occurrences de " << valeur << " : [";
    for(size_t i = 0; i<vecIterateurs.size() ; ++i) {
        cout<<distance(v.begin(), vecIterateurs[i]);
        if(i != vecIterateurs.size() - 1 ; cout<<", ");
    }
    cout<<"]"<<endl;

    return 0;
}

