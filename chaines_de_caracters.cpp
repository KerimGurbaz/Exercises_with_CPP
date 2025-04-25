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
}
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    std::string s = 'A' + std::string("BC");
    std::cout << '|' << s << '|' << std::endl;

    // Soru: Bir string'i 10 adet '-' karakteri ile doldurup yazdırın.
    // (Veri ayıracı olarak kullanılabilir)
    string ayirac;
    ayirac.assign(10, '-'); // '-' karakterinin ASCII değeri 45'tir. ayirac.assign(10, 45); de aynı sonucu verir.
    cout << ayirac << endl;

    string log = "Sistem başlangıcı...";
    string hata_mesaji = "Kritik hata oluştu.";
    char kod = 'X';

    log += "\n";       // Yeni satır ekle
    log += hata_mesaji; // Başka bir string ekle
    log += " Kod: ";
    log += kod;        // Tek karakter ekle

    cout << log << endl;
    /* Çıktı:
       Sistem başlangıcı...
       Kritik hata oluştu. Kod: X
    */


}

