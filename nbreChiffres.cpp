//
// Created by Krm on 01/01/2025.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <random>
#include<vector>

using namespace std;
enum class Chiffre{ ZERO, UN, DEUX, TROIS, QUATRE, CINQ, SIX, SEPT, HUIT, NEUF };

//Fonction qui convertit le nombre en vecteur Chiffre
vector<Chiffre> nbreToEnum(int n) {
    vector<Chiffre> chiffres;

    //rendre positifs les nombres negatifs
    if(n < 0) {
        n = -n;
    }

    //cas particulier pour zéro
    if(n == 0 ) {
        chiffres.push_back(Chiffre :: ZERO);
        return chiffres;
    }

    //Obtenez les chiffres du numero
    while(n > 0) {
        int digit = n % 10;
        switch(digit) {
            case 0 : chiffres.push_back(Chiffre :: ZERO); break;
            case 1 : chiffres.push_back(Chiffre ::UN); break;
            case 2 : chiffres.push_back(Chiffre :: DEUX); break;
            case 3 : chiffres.push_back(Chiffre :: TROIS); break;
            case 4 : chiffres.push_back((Chiffre::QUATRE));break;
            case 5 : chiffres.push_back(Chiffre::CINQ);break;
            case 6 : chiffres.push_back((Chiffre::SIX));break;
            case 7 : chiffres.push_back(Chiffre::SEPT); break;
            case 8 : chiffres.push_back(Chiffre::HUIT);break;
            case 9 : chiffres.push_back(Chiffre::NEUF);break;
            default : break; // Chiffre invalide
        }
        n /=10;
    }

    reverse(chiffres.begin(), chiffres.end());
    return chiffres;
}

ostream& operator<<(ostream& os, const Chiffre& c) {
    switch(c) {
        case Chiffre::ZERO : os<<"ZERO";break;
        case Chiffre::UN      :os<<"UN "; break;
        case Chiffre::DEUX:os<<"DEUX"; break;
        case Chiffre::TROIS     :os<<"TROIS"; break;
        case Chiffre:: QUATRE     :os<<"QUATRE"; break;
        case Chiffre::CINQ    :os<<"CINQ "; break;
        case Chiffre::SIX      :os<<"SIX"; break;
        case Chiffre::SEPT      :os<<"SEPT"; break;
        case Chiffre::HUIT      :os<<"HUIT"; break;
        case Chiffre::NEUF     :os<<"NEUF"; break;
        default: os<<"UNKNOWN"; break;
    }
    return os;
}

ostream& operator<<(ostream& os, const vector<Chiffre>& vec) {
    for(size_t i = 0; i <vec.size(); ++i) {
        os<<vec[i];
        if(i < vec.size() - 1) {
            os<<" ";
        }
    }
    return os;
}


int main() {
    int nbre = 123;
    vector<Chiffre> vec = nbreToEnum(nbre);
    cout<<vec<<endl;

    return 0;
}