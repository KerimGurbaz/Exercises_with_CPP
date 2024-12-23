//
// Created by Krm on 23/12/2024.
//


#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>


template<typename T>
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
