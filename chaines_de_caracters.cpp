//
// Created by Krm on 09.04.2025.
//

/*
* string toLower(string s) {
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

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int transformer(string & texte, const string& source, const string &cible) {
    if(source.length() != cible.length()) {
        return 0;
    }

    int remplacements = 0;

    for(char &c : texte) {
        char c_petit = tolower(c);

        for(size_t i = 0; i<source.length(); ++i) {
        char s_petit = tolower(source[i]);
        if(c_petit == s_petit) {
            c = cible[i];
            remplacements ++;
            break;
        }
    }
    }

return remplacements;
}
int main() {

    string texte2 = "Data Engineering";
    string source2 = "aeiou";
    string correspondance2 = "12345";
    int nombre_remplacements2 = transformer(texte2, source2, correspondance2);
    cout << "Texte après transformation : " << texte2 << endl; // Résultat attendu : D1t1 Eng3n22r3ng
    cout << "Nombre de remplacements : " << nombre_remplacements2 << endl; // Résultat attendu : 6


    return 0;
}

string toLower(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

int transformer(string& texte, const string& source, const string& correspondance) {
    int remplacements = 0;

    string source_minuscules = toLower(source);

    //vérification que les chaines source et correspondance ont la meme taille
    if(source.length() != correspondance.length()) {
        cerr<<"Erreur : Les chaines source et correspondance doivent avoir le meme taille "<<endl;
    return remplacements;
    }

    //parcours de chaque caractere du texte
    for(size_t i  =0 ; i<texte.length(); ++i) {
        char char_texte_minuscule = tolower(texte[i]);

        for (size_t j = 0; j<source_minuscules[j]; ++j) {
            if(char_texte_minuscule == source_minuscules[j]) {
                char char_remplacement = correspondance[j];

                if(isupper(texte[i])) {
                    texte[i] = toupper(char_remplacement);
                }else {
                    texte[i] = char_remplacement;
                }
                remplacements++;
                break;
            }
        }
    }

    return remplacements;
}

int main() {
    string texte = "Hello World!!";
    string source ="eo";
    string correspondance = "XY";
    int nombre_remplacements = transformer(texte, source, correspondance);
    cout << "Texte après transformation : " << texte << endl;
    cout << "Nombre de remplacements : " << nombre_remplacements << endl;
}
string toLower(const string& s) {
    string res = s;
    for(size_t i = 0; i<res.size(); ++i) {
        res[i] = tolower(res[i]); //conversion en minuscule;
    }
    return res;
}

string censurer(const string & texte, const string&motInterdit) {
    string resultat = texte;
    string lowerResultat = toLower(texte);
    string motInterditLower = toLower(motInterdit);

    size_t pos = 0;

    while((pos = lowerResultat.find(motInterdit, pos)) != string::npos) {
        char premier = resultat[pos];

        int longeurRemplacement = (isupper(premier)) ? motInterdit.size() : motInterdit.size()/2 ;
        string remplacement( longeurRemplacement, '*');

        resultat.replace(pos, motInterdit.size(), remplacement);
        lowerResultat.replace(pos, motInterdit.size(), string(longeurRemplacement, '*'));


        pos += remplacement.size();
    }
return resultat;
}
int main() {


    // Exemple d'utilisation
    string texte = "Ceci est un SECRET. Un secret doit rester secret. Et Secret n'est pas toléré.";
    string motInterdit = "Secret";

    cout << "Texte original : " << texte << endl;
    string texteCensuré = censurer(texte, motInterdit);
    cout << "Texte censuré : " << texteCensuré << endl;

    return 0;
}#include <iostream>
#include <string>

using namespace std;

string milieu(const string& str) {
    size_t longueur = str.size();
    if(longueur == 0) {
        return "";
    }

    size_t indice_milieu = longueur / 2;

    if(longueur % 2 != 0) {
        return string(1, str[indice_milieu]);
    }else {
        size_t indice_depart = indice_milieu - 1;

        return str.substr(indice_depart, 2);
    }
}


int main() {

        std::cout << "milieu(\"A\") ->     \"" << milieu("A") << "\"" << endl;
        std::cout << "milieu(\"AB\") ->    \"" << milieu("AB") << "\"" << endl;
        std::cout << "milieu(\"ABC\") ->   \"" << milieu("ABC") << "\"" << endl;
        std::cout << "milieu(\"ABCD\") ->  \"" << milieu("ABCD") << "\"" <<endl;
        std::cout << "milieu(\"ABCDE\") -> \"" << milieu("ABCDE") << "\"" << endl;
        std::cout << "milieu(\"DataEngineering\") -> \"" << milieu("DataEngineering") << "\"" <<endl;
        std::cout << "milieu(\"\") ->      \"" << milieu("") << "\"" << endl;

        return 0;
    }
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

string milieu(const string& str) {
    size_t longueur = str.length();
    if(longueur == 0) {
        return "";
    }

    if(longueur % 2 != 0) {
        //cas impair:
        size_t indiceMilieu = longueur / 2 ;
        return str.substr(indiceMilieu, 1);
    }else {
        size_t indiceMilieu1 = (longueur/2) -1 ;
        return str.substr(indiceMilieu1, 2);
    }
}


int main() {
    cout << "Milieu de \"ABC\" : \"" << milieu("ABC") << "\"" << endl;     // Attendu: "B"
    cout << "Milieu de \"ABCD\" : \"" << milieu("ABCD") << "\"" << endl;   // Attendu: "BC"
    cout << "Milieu de \"X\" : \"" << milieu("X") << "\"" << endl;         // Attendu: "X"
    cout << "Milieu de \"AZERTY\" : \"" << milieu("AZERTY") << "\"" << endl; // Attendu: "ER"
    cout << "Milieu de \"\" : \"" << milieu("") << "\"" << endl;           // Attendu: ""
    cout << "Milieu de \"PYTHON\" : \"" << milieu("PYTHON") << "\"" << endl; // Attendu: "TH"
    return 0;
}

 */

#include <iostream>
#include <string>
using namespace std;

bool contient_centre(const string& texte, const string & mot) {
    int longueur = texte.length();
    int longueur_mot = mot.length();

    if(longueur_mot > longueur || longueur_mot == 0) return false;

    string centre ;
    if(longueur % 2 == 0) {
       centre = texte.substr(longueur/2 -1 , 2);
    }else {
        centre = texte.substr(longueur /2 ,1);
    }

    return centre == mot;
}


int main() {

    cout<<boolalpha;
    cout << contient_centre("HELLO", "L") << endl;  // true
    cout << contient_centre("ABCD", "BC") << endl;  // true
    cout << contient_centre("ABCD", "AB") << endl;  // false
    cout << contient_centre("A", "A") << endl;      // true
    cout << contient_centre("", "A") << endl;       // false
    return 0;
}

