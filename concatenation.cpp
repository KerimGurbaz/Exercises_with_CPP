//
// Created by Krm on 22/12/2024.
//

#include <iostream>
#include <vector>
#include <array>
using namespace std;

template <typename T, typename It1, typename It2>
vector<T> concat_tab(It1 begin1, It1 end1, It2 begin2, It2 end2) {
    vector<T> result;

    //1. Copier les element de la premier plage
    for(It1 it =begin1; it != end1; ++it) {
        result.push_back(*it); // Ajoute l'élément pointé par 'it' à la fin du vecteur
    }

    //2. Copier les elements de la deuxieme plage
    for(It2 it = begin2 ; it != end2; ++it) {
        result.push_back( *it);
    }

    return result;
}
int main() {
    vector<int> vec  = {11,12, 13};
    array<int, 5> arr = {21,22,23, 24, 25};

    //utilisation de la fonction avec un vecteur et un array
    vector<int> res = concat_tab<int>(vec.begin(), vec.end(), arr.begin(), arr.end());

    cout<<"vector : [";
    for(int i = 0; i < vec.size(); ++i) {
        cout<<vec[i]<<(i<vec.size()-1 ? ", " : "");
    }
    cout<<"]"<<endl;

    cout<<"array : [";
    for(int i = 0; i <arr.size(); ++i) {
        cout<<arr[i]<<(i <arr.size()-1 ? ", " : "");
    }
    cout<<"]"<<endl;

    cout<<"Resultat : [";
    for(int i = 0; i< res.size() ; ++i) {
        cout<<res[i] << (i < res.size() -1 ? ", " : "");
    }
    cout<<"]"<<endl;


    return 0;
}
