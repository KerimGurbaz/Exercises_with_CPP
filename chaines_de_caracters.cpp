//
// Created by Krm on 09.04.2025.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string toLower(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

int transformer( string & texte, const string& source, const string& correspondance) {
    int remplacements = 0;

    string texte_minuscules = toLower(texte);
    string source_minuscules = toLower(source);

    // verification que les chaine source et correspondance ont la meme taille
    if(source.length() != correspondance.length()) {
        cerr<<"erreur : source et correspondance doivent avoir la meme taille"<<endl;
        return remplacements;
    }

    for(size_t i = 0; i<texte.length() ; ++i) {
        for(size_t j = 0; j<source_minuscules.length(); ++j) {
            if(texte_minuscules[i] == source_minuscules[j]) {
                texte[i] = correspondance[j];
                remplacements++;
                break;
            }

        }

    }
    return remplacements;

}


int main() {
    string texte = "Hello World!";
    string source = "eo";
    string correspondance = "XY";
    int nombre_remplacements = transformer(texte, source, correspondance);
    cout << "Texte après transformation : " << texte << endl; // Résultat attendu : HXXlo World!
    cout << "Nombre de remplacements : " << nombre_remplacements << endl; // Résultat attendu : 2

    return 0;
}