#include <iostream>
#include <vector>
#include <iterator> // Pour std::iterator_traits
#include <string>
using namespace std;

// Fonction générique pour afficher le contenu d'un vecteur
template <typename T>
void displayVector(const std::vector<T>& vec, const std::string& name) {
    std::cout << name << " = {";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i != vec.size() - 1) std::cout << ", ";
    }
    std::cout << "}" << std::endl;
}

// Fonction générique pour concaténer deux plages de données
template <typename T, typename Iterator1, typename Iterator2>
vector<T> concat_tab(Iterator1 first1, Iterator1 last1, Iterator2 first2, Iterator2 last2) {
    vector<T> result;

    // Optionnel : Réserver de l'espace pour optimiser les allocations
    // Calculer le nombre d'éléments dans chaque plage
    size_t count1 = distance(first1, last1);
    size_t count2 = distance(first2, last2);
    result.reserve(count1 + count2);

    // Ajouter les éléments de la première plage
    for (Iterator1 it = first1; it != last1; ++it) {
        result.push_back(*it);
    }

    // Ajouter les éléments de la seconde plage
    for (Iterator2 it = first2; it != last2; ++it) {
        result.push_back(*it);
    }

    return result;
}

int main() {
    // Vecteur initial
    vector<int> v{11, 12, 13};

    // Tableau initial
    int arr[] = {21, 22, 23, 24, 25};
    size_t arr_size = sizeof(arr) / sizeof(arr[0]);

    // Affichage des vecteurs et tableaux avant concaténation
    displayVector(v, "v");
cout << "array = {";
    for (size_t i = 0; i < arr_size; ++i) {
      cout << arr[i];
        if (i != arr_size - 1) cout << ", ";
    }
   cout << "}" << endl;

    // Concaténation des deux plages

    vector<int> resultat = concat_tab<int>(v.begin(), v.end(), arr, arr + arr_size);

    // Affichage du résultat
    displayVector(resultat, "resultat");

    return 0;
}
