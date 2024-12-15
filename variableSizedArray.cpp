//
// Created by Krm on 15/12/2024.
//
#include <iostream>
#include <vector>
using namespace std;


int main() {
    int N, Q;
    cin>>N,Q;

    // Creation d'un vecteur de vecteurs pour stocker les tableaux
    vector<vector<int>> tableauPrincipal(N);

    //Lecture des N tableaux;
    for(int i = 0; i <N; ++i) {
        int k;
        cin>>k; //lecteure de la taille du tableau
        tableauPrincipal[i].resize(k); // Redimension du sous-vecteur
        for(int j = 0; j < k ; ++j) {
            cin>>tableauPrincipal[i][j]; // Lecteure des éléments du tableau
        }
    }

    // Traitement des Q requetes
    for(int q = 0; q< Q; ++q) {
        int i, j;
        cin>>i >>j; // lecteure des indices i et j
        // affichage de l'element demandé
        cout<<tableauPrincipal[i][j]<<endl;
    }

    return 0;
}