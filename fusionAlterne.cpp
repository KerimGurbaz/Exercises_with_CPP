#include <iostream>
#include <array>
#include <vector>
#include <span>

using namespace std;


template <typename T>
ostream& operator<< (ostream& os, span<T> s) {
    os << "[";
    for (size_t i=0; i<s.size(); ++i) {
        if (i) os << ", ";
        os << s[i];
    }
    return os << "]";
}

// Fonction générique pour concaténer deux plages de données

template<typename T, typename iterator1, typename iterator2>
vector<T> concat_tab(iterator1 first1, iterator1 last1,
                    iterator2 first2, iterator2 last2) {

    // Initialisation du vecteur avec la taille totale nécessaire
    vector<T> v(distance(first1, last1) + distance(first2, last2));

    // Itérateur pointant vers le début du vecteur résultant
    typename  vector<T>::iterator it = v.begin();

    // Copie des éléments de la première plage
    while(first1 != last1)
        *it++ = *first1++;

    // Copie des éléments de la seconde plage
    while(first2 != last2)
        *it++ = *first2++;

    return v;
}

int main() {
    // Déclaration d'un vecteur et d'un tableau
    vector<int> v {11, 12, 13};
    array<int, 5> a {21, 22, 23, 24, 25};

    // Affichage des conteneurs avant concaténation
    cout << "vector   : " << span<int>(v) << endl;
    cout << "array    : " << span<int>(a) << endl;

    // Concaténation des deux plages
    vector<int> r = concat_tab<int>(v.begin(), v.end(),
                                   a.begin(), a.end());

    // Affichage du résultat
    cout << "resultat : " << span<int>(r) << endl;

    return 0;
}


