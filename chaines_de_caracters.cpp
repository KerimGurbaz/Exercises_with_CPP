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

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int valeurSymbole(char caractere_romain) {
switch (caractere_romain) {
    case 'I' : return 1;
    case 'V' : return 5;
    case 'X' : return 10;
    case 'L' : return 50;
    case 'C' : return 100;
    case 'D' : return 500;
    case 'M' : return 1000;
    default : return 0;
}
}

int romainVersEntier(const string& chiffre_romain) {
    int resultat_total = 0;
    size_t longueur = chiffre_romain.length();

    //Parcourir la chaine du chiffre romain
    for(size_t i = 0; i<longueur; ++i) {
        //obtenir la valeur du symbole actuel
        int valeur_actuelle = valeurSymbole(chiffre_romain[i]);

        if(i + 1 < longueur) {
            int valeur_suivante = valeurSymbole(chiffre_romain[i+1]);

            if(valeur_actuelle < valeur_suivante) {
                resultat_total += (valeur_suivante - valeur_actuelle);
                i++;
            }else {
                resultat_total += valeur_actuelle;
            }
        }else {
            resultat_total += valeur_actuelle;
        }
    }
return resultat_total;

}

int main() {


    cout << "Conversion de Chiffres Romains en Entiers :" << endl;
    cout << "------------------------------------------" << endl;

    // Tableau de cas de test
    // Chaque paire contient le chiffre romain et sa valeur attendue
    vector<pair<string, int>> tests = {
        {"I", 1},
        {"II", 2},
        {"III", 3},
        {"IV", 4},
        {"V", 5},
        {"VI", 6},
        {"VII", 7},
        {"VIII", 8},
        {"IX", 9},
        {"X", 10},
        {"XI", 11},
        {"XIV", 14},
        {"XV", 15},
        {"XIX", 19},
        {"XX", 20},
        {"XL", 40},
        {"L", 50},
        {"LX", 60},
        {"XC", 90},
        {"C", 100},
        {"CD", 400},
        {"D", 500},
        {"CM", 900},
        {"M", 1000},
        {"MCMXCIV", 1994}, // Test complexe
        {"MMXXIV", 2024},   // Année actuelle (exemple)
        {"MMMMDCCCLXXXVIII", 4888}, // Exemple de l'énoncé
        {"MMMCMXCIX", 3999} // Un grand nombre avec beaucoup de soustractions
    };

    bool tous_reussis = true;
    for (const auto& test : tests) {
        string romain = test.first;
        int attendu = test.second;
        int obtenu = romainVersEntier(romain);

        cout << "Romain: \"" << romain << "\" -> Attendu: " << attendu << ", Obtenu: " << obtenu;
        if (obtenu == attendu) {
            cout << " (REUSSI)" << endl;
        } else {
            cout << " (ECHOUE)" << endl;
            tous_reussis = false;
        }
    }

    cout << "------------------------------------------" << endl;
    if (tous_reussis) {
        cout << "Tous les tests ont reussi !" << endl;
    } else {
        cout << "Au moins un test a echoue." << endl;
    }

    return 0;
}

string entierVersRomain(int nombre) {
    if(nombre <1 || nombre > 4999) {
        return "Nombre hors limites(1 - 4999)";
    }
const vector<pair<int, string>> valeurs_symboles = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},{100, "C"},
        {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9,"IX"},
        {5, "V"}, {4, "IV"}, {1, "I"}

};

    string resultat_romain = "";

    for(const auto& val_sym : valeurs_symboles) {
        int valeur = val_sym.first;
        const string & symbole = val_sym.second;

        while(nombre >= valeur) {
            resultat_romain += symbole;

            nombre -= valeur;
        }
    }

    return resultat_romain;
}



int main() {
    vector<pair<int, string>> tests_conversion_inverse = {
        {1, "I"},
        {3, "III"},
        {4, "IV"},
        // ... (diğer test durumları) ...
        {1994, "MCMXCIV"},
        {4888, "MMMMDCCCLXXXVIII"}
    };

    return 0;
}
int main() {
    int nombre_utilisateur_int;
cout<<"Entrez un nombre entier >= 0 : ";
    cin>> nombre_utilisateur_int;

    string nombre_en_chaine = to_string(nombre_utilisateur_int);

    cout<<"Nombre saisi : "<<nombre_en_chaine<<endl;

    int nombre_de_chiffres = nombre_en_chaine.length();
    cout<<"Nombre de chiffre : "<<nombre_de_chiffres<<endl;

    if(nombre_de_chiffres > 0) {
        string premier_chiffre_str = nombre_en_chaine.substr(0, 1);

        int premier_chiffre_val = stoi(premier_chiffre_str);
        cout << "Premier chiffre    : " << premier_chiffre_val << endl;
        string dernier_chiffre_str = nombre_en_chaine.substr(nombre_de_chiffres -1, 1);
        int dernier_chiffre_val = stoi(dernier_chiffre_str);
        cout << "Dernier chiffre    : " << dernier_chiffre_val << endl;
    }else {
        cout<<"Le nombre n'a pas de chiffres(chaine vide)"<<endl;
    }
return 0;
}
int main() {

    string nom_complet;
cout<<"Entrez un prenom et nom separes par un espace : ";
    getline(cin, nom_complet);
    cout<<"Nom saisi : "<<nom_complet<<endl;

    size_t position_premier_espace = nom_complet.find(' ');
    size_t position_dernier_espace = nom_complet.rfind(' ');
    if(position_premier_espace != string::npos && position_premier_espace == position_dernier_espace) {
        if(position_premier_espace > 0 && position_premier_espace <nom_complet.length() - 1) {
            char initiale_prenom = nom_complet.front();
            char initial_nom = nom_complet[position_premier_espace + 1];
            cout<<initiale_prenom<<"."<<initial_nom<<endl;

            cout<<"Initiales : "
                <<static_cast<char>(toupper(initiale_prenom))<<"."
                <<static_cast<char>(toupper(initial_nom))<<"."<<endl;

        }

    }
    return 0;
}

int main() {
    string ligne_complet ;

    cout<<"entre votre prenom et nom " ;
    getline(cin, ligne_complet);

    string prenom_str;
    string nom_str;
    string acronyme_str="";

    size_t position_espace = ligne_complet.find(' ');

    if(position_espace != string::npos && position_espace < ligne_complet.length() - 1) {
        prenom_str = ligne_complet.substr(0,position_espace );

        nom_str = ligne_complet.substr(position_espace + 1);

        cout<<"Votre prenom est : "<<prenom_str<<endl;
        cout<<"Votre nom est : "<<nom_str<<endl;

        if(!prenom_str.empty() && !nom_str.empty()) {
            acronyme_str += static_cast<char>(toupper(prenom_str.front()));
            acronyme_str += static_cast<char>(toupper(nom_str.front()));
            acronyme_str += static_cast<char>(toupper(nom_str.back()));

            cout<<"Votre acronyme est : "<<acronyme_str<<endl;

        }else {
            cout<<"Erreur : Prenom ou nom vide apres separation."<<endl;
        }
    }else {
        cout<<"Format d'entree invalide . Assurez vous d'entrer un prenom et un nom separes par espace."<<endl;
    }

return 0;
}

int main() {
    string nom_utilisateur;
    string anne_naissance_str;
    cout<<"Entrez un nom d'utilisateur : "<<endl;
    cin>>nom_utilisateur;
    cout<<"Entrez votre anne de naissance (AAAA) : ";
    cin>>anne_naissance_str;
    string tag_genere="";

    string partie_nom;
    if(nom_utilisateur.length() >= 4) {
        partie_nom = nom_utilisateur.substr(0,4);
    }else {
        partie_nom = nom_utilisateur;
    }

    for(char &c :partie_nom) {
        c = static_cast<char>(tolower(c));
    }

    tag_genere += partie_nom;
    tag_genere += "-";

    if(anne_naissance_str.length() >= 2) {
        tag_genere += anne_naissance_str.substr(anne_naissance_str.length() - 2, 2);
    }else {
        tag_genere += "XX";
    }

    cout<<"Tag utilisateur genere : "<<tag_genere<<endl;
    return 0;
}
bool estUnPalindrome(const string& mot) {
    int longueur = mot.length();

    if(longueur <=1) {
        return true;
    }

    int debut = 0;
    int fin = longueur -1;


    while(debut < fin) {
        if(toupper(mot[debut]) != toupper(mot[fin])) {
            return false;
        }
        debut ++;
        fin --;
    }
    return true; // c'est palindrome
}


int main() {
    string mot_utilisateur;
    while(true) {
        cout<<"Entrez un mot (ou 'quitter' pour sortir ) : ";
        cin>>mot_utilisateur;

        if(mot_utilisateur == "quitter") {
            cout<<"Fermeture du programme. Au revoir !"<<endl;
            break;
        }
        if (estUnPalindrome(mot_utilisateur)) {
            cout << "Le mot '" << mot_utilisateur << "' est un palindrome." << endl;
        } else {
            cout << "Le mot '" << mot_utilisateur << "' n'est pas un palindrome." << endl;
        }
        cout << endl;
    }
return 0;

}
 */

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm> //algorithm
#include <cctype> //tolower
using namespace std;


string inverserMotsDansPhrase(const string& pharase_originale) {
    if(pharase_originale.empty()) {
        return "";
    }

    stringstream ss(pharase_originale);
    string mot;
    vector<string> mots_vecteur;

    while(ss >> mot) {
        mots_vecteur.push_back(mot);
    }

    reverse(mots_vecteur.begin(), mots_vecteur.end());

    string phrase_resultat ="";
    for(size_t i = 0; i < mots_vecteur.size(); ++i) {
        phrase_resultat += mots_vecteur[i];
        if(i < mots_vecteur.size() - 1) {
            phrase_resultat += " ";
        }


    }

return phrase_resultat;
}

int main() {
    string phrase_utilisateur;
    cout<<"Entrez une phrase : ";

    getline(cin, phrase_utilisateur);

    string phrase_inverse = inverserMotsDansPhrase(phrase_utilisateur);
    cout<<"phrase_inverse : "<<phrase_inverse<<endl;
}