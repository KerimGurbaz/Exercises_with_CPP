//
// Created by Krm on 07.03.2025.
//
#include <cstdint>
#include <iostream>
#include <random>
using namespace std;

/*
* int main() {
    cout << "Hello, World!" << std::endl;

    struct Coord {
        int x, y ,z;
    };

    struct Cercle {
        int rayon;
        Coord centre;
    };

    const Coord origine = {0, 0, 0};
    Cercle cercle = {1, {2,3,4}};
    Cercle *ptr = &cercle;
    cout << (*(&cercle)).rayon<<endl;;



    cout<<cercle.rayon<<endl;
    cercle.centre =origine;

    return 0;
}
struct Date {

    int jour, mois, annee;
};

struct Personne {

    string nom;
    string adresse;
    Date anniversaire;
};

void afficher_personne(const Personne &p) {
    std::cout << "Nom          : " << p.nom << std::endl;
    std::cout << "Adresse      : " << p.adresse << std::endl;
    std::cout << "Anniversaire : "
              << p.anniversaire.jour << "."
              << p.anniversaire.mois << "."
              << p.anniversaire.annee << std::endl;
}

int main() {
    // Création et initialisation d'une instance de Personne (pour la Question 4)
    Personne p = {"Anna", "Yverdon", {30, 10, 2023}};
    std::cout << "Informations de la personne (Question 4) :" << std::endl;
    afficher_personne(p);
    std::cout << std::endl;

    // Création d'un tableau de 3 éléments de type Personne
    Personne personnes[3] = {
        {"Anna",    "Yverdon", {30, 10, 2023}},
        {"Bob",     "Lausanne", {15, 5, 1990}},
        {"Charlie", "Genève",   {1, 1, 1985}}
    };

    std::cout << "Informations des personnes (Tableau de structs) :" << std::endl;

    // Parcours du tableau et affichage des informations pour chaque personne
    for (int i = 0; i < 3; i++) {
        std::cout << "Personne " << i + 1 << ":" << std::endl;
        afficher_personne(personnes[i]);
        std::cout << std::endl;
    }

    return 0;
}

include <iostream>
#include <string>

struct Date {
    int jour;
    int mois;
    int annee;
};

struct Personne {
    string nom;
    string adresse;
    Date anniversaire;
};

void afficher_personne(const Personne &p) {
    cout<<p.nom<<endl;
    cout<<p.adresse<<endl;
    cout<<p.anniversaire.jour<<"."
    <<p.anniversaire.mois<<"."
    <<p.anniversaire.annee<<endl;
}

int main() {
    Personne p = {"Kerim", "Gurbaz", {29, 19, 1987}};
    cout<<"Informations de la personne"<<endl;
    afficher_personne(p);
    cout<<endl;

    Personne personnes[3] = {
        {"Anna",    "Yverdon", {30, 10, 2023}},
        {"Bob",     "Lausanne", {15, 5, 1990}},
        {"Charlie", "Genève",   {1, 1, 1985}}
    };

    cout<<"Informations des personnes (Tableau de structs)"<<endl;

    for(int i =0; i<3 ; ++i) {
        cout<<"Personne"<<i + 1<<": "<<endl;
        afficher_personne(personnes[i]);
        cout<<endl;

    }



    return 0;
}
#include <iostream>
#include <cstdint> //Pour uint8_t et uuint16_t
using namespace std;

struct Date {
    uint8_t jour;
    uint16_t mois;
    uint16_t annee;
};

bool est_bissextile(Date date) {
    if(date.annee %400 == 0) {
        return true;
    }else if(date.annee % 4 ==0 && date.annee % 100 != 0) {

        return true;
    }else {
        return false;
    }
}

int main() {
    Date date1 = {29, 2, 2024};
    Date date2 = {15, 3, 2023};
    Date date3 = {29, 2, 1900};
    Date date4 = {29, 2, 2000};

    cout << "2024 est bissextile : " << est_bissextile(date1) <<endl;
    cout << "2023 est bissextile : " << est_bissextile(date2) <<endl;
    cout << "1900 est bissextile : " << est_bissextile(date3) <<endl;
    cout << "2000 est bissextile : " << est_bissextile(date4) <<endl;

}#include <iostream>
#include <string>

struct Livre {
    string titre;
    string auteur ;
    int nbPages;
};

int main() {
Livre monLivre = {"Le Petit Prince", "Antoine de Saint-Exupery", 96};
    cout<<monLivre.titre<<endl;
    cout<<monLivre.auteur<<endl;
    cout<<monLivre.nbPages<<endl;

    return 0;
}struct Point {
    int x;
    int y;
};

int main() {
    Point p ={35, 28};

    Point point = {2016, 2020};

    cout<<p.x<<endl;
    cout<<p.y<<endl;
    cout<<point.x<<endl;
    cout<<point.y<<endl;


    Point xy;

    xy.x =233131;
    xy.y = 3892873;

    cout<<    xy.x<<endl;
    cout<<    xy.y<<endl;

    return 0;
}
struct Date {
    int jour, mois, annee;
};

bool est_bissextile(const Date &d) {

    if(d.annee %400 == 0) {
        return true;
    }else if(d.annee % 4 == 0 && d.annee %100 != 0) {
        return true;
    }else {
        return false;
    }
}

int main() {

    Date d1 = {29, 10, 0};
    Date d2 = {29, 10, 1920};
    Date d3 = {29, 10, 1900};
    Date d4 = {29, 10, 2025};

    cout<<est_bissextile(d1)<<endl;
    cout<<est_bissextile(d2)<<endl;
    cout<<est_bissextile(d3)<<endl;
    cout<<est_bissextile(d4)<<endl;
    return 0;
}


#include <iostream>
#include <sstream>
#include <cstdint>
#include <cstdlib>
using namespace std;

struct Date {
    uint8_t jour;
    uint8_t mois;
    uint16_t annee;
};

//Vérifie si une année est bissextile selon la calendrier gregorian

bool is_leap_year(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year %100 != 0);
}

//Retourne le nombre de jours dans un mois donné d'une année donnée

int days_in_month(int month, int year) {
    switch(month) {
        case 1: return 31;
        case 2: return is_leap_year(year) ? 29 : 28;
        case 3: return 31;
        case 4: return 30;
        case 5: return 31;
        case 6: return 30;
        case 7: return 31;
        case 8: return 31;
        case 9: return 30;
        case 10: return 31;
        case 11: return 30;
        case 12: return 31;

        default :return 0; // cas d'erreur

    }
}

int date_to_int(const Date &d) {
    int days = 0;
    for(int y = 1; y <d.annee; y++) {
        days += is_leap_year(y) ? 366 : 365;
    }

    // Ajouter les jours pour tous les mois complets de l'année courante
    for(int m = 1 ; m < d.mois ; m++) {
        days += days_in_month(m, d.annee);
    }

    days += d.jour;

    return days;

}

//Calcule le nombre de jours entre deux dates(l'orde n'a pas d'importance)
int jours_entre(const Date &d1, const Date &d2) {
    int days1 = date_to_int(d1);
    int days2 = date_to_int(d2);
    return abs(days2 -days1);
}

string to_string(const Date &d) {
    stringstream ss;
    ss<<static_cast<int>(d.jour)<<"/"
    <<static_cast<int>(d.mois)<<"/"
    <<d.annee;
    return ss.str();
}

int main() {
    Date d1{31, 1, 1973};
    Date d2{7, 11, 2023};

    cout << jours_entre(d1, d2) << " jours entre "
      << to_string(d1) << " et "
      << to_string(d2) << endl;
}
struct Student {
    string prenom;
    string nom;
    uint16_t num;
};

struct Rectangle {
    int width;
    int height;
};

void printStudent(const Student &s) {
    cout<<s.prenom<<"\n"<<s.nom<<"\n"<<s.num<<endl;

}

struct Adress {
    string street;
    string city ;
    int zipCode;
};

struct Employee {
    string name;
    int age;
    Adress adress;
};

struct Product {
    string name;
    int price;
};

int main() {

    Product p[5] = {
        {"Toyota", 1000},
        {"BMW", 2000},
        {"Tesla" , 5000},
        {"Volvo", 4000},
        {"Mercedes", 3000}
    };
    int index = 0;
    int max = p[0].price;
    for(int i = 1; i < 5 ; ++i) {

     if(p[i].price >= max) {
         max = p[i].price;
         index = i;
     }
    }
 cout<<"la voiture avec le prix le plus élevé est "<<p[index].name
        <<" prix est "<<p[index].price<<endl;
    Student s = {"KErim ", "Gurbaz", 1287};
    cout<<s.nom<<" ,"<<s.prenom<<" no = "<<s.num<<endl;

    Rectangle r ={5, 10};
    cout<<"Avant , L'aire est   = "<< r.height * r.width<<endl;

    r.height = 100;

    cout<<"Apres , L'aire est   = "<< r.height * r.width<<endl;

    printStudent(s);

    Employee e = {"Damla", 32, {"rose", "Ankara", 1110}};


    cout<<e.name
    <<e.age
    <<e.adress.city<<endl;




    return 0;
}
using namespace std;

struct Letters {
    char first;
    char last;
};
Letters premiere_et_derniere_lettres(const string &s) {
    Letters res;
    res.first = s[0];
    res.last = s[(s.size() - 1)];
    return res;
}


int main() {
    string s = "Hello";
    auto [ prem, der ] = premiere_et_derniere_lettres(s);
    cout << prem << " -> " << der << endl;
}

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
struct Letter {
    char first;
    char middle;
    char last;
};
Letter premiere_mil_derniere_lettres(string &s) {
    if(s.empty()) {
        throw invalid_argument("La chaine est vide");
    }
    Letter res;
    res.first = s.front();
    res.last = s.back();
    res.middle = (s.size() % 2 ? s[(s.size() )/2] : s[(s.size())/2 -1]);

    return res;
}


int main() {
    try {
        string s = "d";
    auto [ prem,mil, der ] = premiere_mil_derniere_lettres(s);
    cout << prem << " -> " << mil<< " -> "<<der << endl;
    }catch(const invalid_argument &e) {
        cerr<<"Erreur: "<< e.what()<<endl;
    }

}


#include <iostream>
#include <string>
#include <tuple>
#include <stdexcept>
using namespace std;

tuple<char, char, char> obtenirPremierMilieuDerniereLettre(const string &chaine) {
    if(chaine.empty()) {
        throw invalid_argument("La chaine ne peut pas etre vide");
    }

    char premierLettre = chaine[0];

    size_t longueur = chaine.length();
    size_t indexMilieu;

    if(longueur % 2 == 0) {
        indexMilieu = longueur / 2 - 1 ;
    }else {
        indexMilieu = longueur /2;
    }

    char lettreMilieu = chaine[indexMilieu];
    char dernierLettre = chaine[longueur - 1];

    return make_tuple(premierLettre, lettreMilieu, dernierLettre);
}

int main() {
    string mot1 ="example";
    string mot2 = "ordinateur";
    string mot3 =  "a";

    try {
        auto[premiere1, milieu1, derniere1]= obtenirPremierMilieuDerniereLettre(mot2);
        cout << "Pour le mot '" << mot1 << "': Première lettre = " << premiere1
        << ", Lettre du milieu = " << milieu1 << ", Dernière lettre = " << derniere1 << std::endl;
    }catch (const invalid_argument &e) {
        cerr<<"Erreur : "<<e.what();

    }



    return 0;
}

#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

struct MinMax {
    char min ;
    char max;
};


MinMax minmax(const string &s) {
    if(s.empty()) {
        throw invalid_argument("La chaine est vide");
    }
    char minC = s.front();
    char maxC = s.front();

    for(char c : s) {
        if(c < minC) minC = c;
        if(c> maxC) maxC = c;
    }

    return {minC, maxC};
}

int main() {
    string s = "Hello";
    auto[min, max] = minmax(s);
    cout << "Min: " << min << " - Max: " << max << endl;
}
#include <iostream>
#include <string>
#include <utility>
using namespace std;

pair<char, char> premiere_et_derniere_lettres(const string &str) {
    if(str.empty()) {
        return make_pair('\0', '\0');
    }
    char premiere = str[0];
    char derniere = str[str.length()- 1];
    return make_pair(premiere, derniere);
}


int main() {
    string s = "Hello";
    auto [prem, der] = premiere_et_derniere_lettres(s);
    cout<<prem<<"->"<< der<<endl;

    string vide = "";
    auto [prem_vide, der_vide] = premiere_et_derniere_lettres(vide);
    cout<<prem_vide<<"->"<< der_vide<<endl;

}
#include <iostream>

#include <string>
#include <utility>
using namespace std;

char deuixeme(const string &s) {
  if(s. empty() || s.length() < 2) {
      return 0;
  }

    char second = s[1];
    return second;
}
int main() {

    string name = "KErim ";
    char res = deuixeme(name);
    cout<<res;

    return 0;
}

#include <iostream>
#include <string>
#include <stdexcept>
#include <utility>
#include <tuple>
using namespace std;

bool premiere_et_derniere_identiques (const string &s) {
    if(s.empty()) {
        throw invalid_argument("La chaine ne doit pas etre vide");
    }

    if(s.length() < 2) {
        return false;
    }else {
        char pre = s[0];
        char der = s[s.length()-1];
        if(pre == der) {
            return true;
        }else {
            return false;
        }
    }


}

tuple<char, char, int> exemple (const string & s) {
    if(s.empty()) {
        throw invalid_argument("La cjhaine ne doit pas etre vide");
    }

    return make_tuple(s.front(), s.back(), s.size());
}
int main() {
    try {
        string s1 = "selams";
        string s2 = "kerim";

        bool res = premiere_et_derniere_identiques(s1);
        cout<<res<<endl;

        bool res2 = premiere_et_derniere_identiques(s2);
        cout<<res2<<endl;
    }catch(const exception &e) {
        cout<<"Erreur : " <<e.what()<<endl;
    }
}

#include <iostream>
using namespace std;

using Jour = uint8_t;
using Mois = uint8_t;
using Annee = uint16_t;

enum class MoisEnum {
    Janvier =1,
    Fevrier,
    Mars,
    Avril,
    Mai,
    Juin,
    Juillet,
    Aout,
    Septembre,
    Octobre,
    Novembre,
    Decembre
};

struct Date {
    Jour jour;
    Mois mois;
    Annee annee;
};

bool est_bissextile(Annee annee) {
    return (annee % 4 == 0 && annee %100 != 0) || (annee %400 == 0);
}

Jour nombreJoursDansMois(MoisEnum mois, Annee annee) {
    switch (mois) {
        case MoisEnum::Janvier:
            case MoisEnum::Mars:
        case MoisEnum::Mai:
        case MoisEnum::Juillet:
        case MoisEnum::Aout:
        case MoisEnum::Octobre:
        case MoisEnum::Decembre:
        return 31;
        case MoisEnum::Avril:
            case MoisEnum::Juin:
        case MoisEnum::Septembre:
        case MoisEnum::Novembre:
        return 30;
        case MoisEnum ::Fevrier:
            return (est_bissextile(annee) ? 29 : 28 );
        default:
            return 0;
    }
}

int main() {

    Annee annee1 = 2023;
    MoisEnum mois1 = MoisEnum::Fevrier;

    cout<<"Nombre de jours en fevrier "<< annee1<<" : "<<static_cast<int>(nombreJoursDansMois(mois1, annee1)) <<endl;



    return 0;
}

#include <iostream>
using namespace std;

enum NomMois {
    Janvier =1,
    Février,
   Mars,
   Avril,
   Mai,
   Juin,
   Juillet,
   Août,
   Septembre,
   Octobre,
   Novembre,
   Décembre
};

struct Date {
    int jour;
    NomMois mois; //utilisation de l'enueration pour le mois
    int annee;
};

int main() {
    Date aujourdHui;
    aujourdHui.jour =15;
    aujourdHui.mois = Mars;
    aujourdHui.annee = 2025;

    cout<<"Date : "<<aujourdHui.jour<<"/"<<(aujourdHui.mois)<<"/"<<aujourdHui.annee<<endl;
    cout<<aujourdHui.mois<<endl;
}

#include <iostream>
#include <string>
using namespace std;

enum class Jour{LUNDI, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI, DIMANCHE};

int main() {
    Jour jour = Jour::VENDREDI;

    string chaine = "jour de la semaine : " ;

    switch(jour) {
        case Jour::LUNDI:
            chaine += "lundi";
        break;
        case Jour::MARDI:
            chaine += "mardi";
        break;
        case Jour::MERCREDI:
            chaine += "mecredi";
        break;
    case Jour::JEUDI:
            chaine += "jeudi";
        break;
        case Jour::VENDREDI:
            chaine += "vendredi";
        break;
        case Jour::SAMEDI:
            chaine += "samedi";
        break;
        case Jour::DIMANCHE:
            chaine += "dimanche";
        break;
        default:
            chaine = "jour inconnu";
        break;
    }

    cout<<  chaine<<endl;

}

#include <iostream>
#include <string>
using namespace std;

enum class Couleur{ROUGE, VERT, BLEU};

int main(){
    Couleur couleur = static_cast<Couleur>(99);
    string str = "C'est la couleur " ;

    switch(couleur) {
        case Couleur::BLEU:
            str += "blue";
        break;
        case Couleur::ROUGE:
            str += "rouge";
        break;
        case Couleur::VERT:
            str += "vert ";
        break;
        default:
            str+="innconu";
    }

    cout<<str<<endl;


    return 0;

}
#include <iostream>

enum class Direction{HAUT, BAS, DROITE,GAUCHE};


struct Coord {
    int x =0;
    int y = 0;
};

using Point = Coord;

void deplacer(Point & point, Direction direction) {
    switch(direction) {
        case Direction::HAUT:
            point.y++;
        break;
        case Direction::BAS:
            point.y--;
        break;
        case Direction::DROITE:
            point.x++;
        break;
        case Direction::GAUCHE:
            point.x--;
        default:
            break;
    }
}

int main() {
    Point p; //Point initial à (0,0);
    cout<<"Point initial : ("<<p.x<<", "<<p.y<<")\n";

    deplacer(p, Direction::HAUT);
    cout << "Après déplacement HAUT: (" << p.x << ", " << p.y << ")\n";
    // Déplacer le point vers la droite
    deplacer(p, Direction::DROITE);
    std::cout << "Après déplacement DROITE: (" << p.x << ", " << p.y << ")\n";

    return 0;
}


#include <iostream>

enum class Chiffre{ZERO, UN, DEUX, TROIS, QUATRE, CINQ, SIX, SEPT, HUIT, NEUF};
Chiffre next(Chiffre c) {
    return static_cast<Chiffre>((static_cast<int>(c) + 1) % 10);
}

void afficher(Chiffre c) {
    switch (c) {
        case Chiffre::ZERO:
            cout<<"ZERO";
        break;
        case Chiffre::UN:
            cout<<"UN";
        break;
        case Chiffre::DEUX:
            cout<<"DEUX";
        break;
        case Chiffre::TROIS:
            cout<<"TROIS";
        break;
        case Chiffre::QUATRE:
            cout<<"QUATRE";
        break;
        case Chiffre::CINQ:
            cout<<"CINQ";
        break;
        case Chiffre::SIX:
            cout<<"SIX";
        break;
        case Chiffre::SEPT:
            cout<<"SEPT";
        break;
        case Chiffre::HUIT:
            cout<<"HUIT";
        break;
        case Chiffre::NEUF:
            cout<<"NEUF";
        break;

    }
}
int main() {

    Chiffre a = Chiffre::CINQ;
    Chiffre b = next(a);

    afficher(a);
    cout<<(a < b ? " < " : " >= ");

    afficher(b);
    cout<<endl;

    Chiffre neuf = Chiffre::NEUF;
    Chiffre zero = next(neuf);
    afficher(neuf);
    cout<<"->";

    afficher(zero);
    cout<<endl;

    // Pour la comparaison, les enums class sont comparables par défaut
    std::cout << (neuf < zero ? "NEUF < ZERO" : "NEUF >= ZERO") << std::endl; // NEUF >= ZERO

    return 0;
}


 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdint>

using namespace std;
using DD = double;

struct Coord_DD {
    DD latitude;
    DD longitude;
};

using Degree = uint8_t;
using Minute =uint8_t;
using Second = double;

struct DMS {
    Degree degree;
    Minute minute;
    Second second;
};

enum class Dir_NS {N, S};
enum class DIR_EW {E, W};

struct DMS_Latitude {
    Dir_NS direction; // Direction(Nord ou Sud)
    DMS dms; //structure DMS pour la latitude
};





