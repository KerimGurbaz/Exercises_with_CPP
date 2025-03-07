//
// Created by Krm on 28/12/2024.
//
#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <algorithm>

using namespace std;

// size() metoduna sahip türler (vector, array gibi) için selectionSort
template <typename T>
void selectionSort(T& arr) {
    for (size_t i = 0; i < arr.size() - 1; ++i) {
        size_t min_idx = i;
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swap(arr[i], arr[min_idx]);
        }
    }
}

// Temel diziler (T[]) için selectionSort
template <typename T>
void selectionSort(T arr[], size_t size) {
    for (size_t i = 0; i < size - 1; ++i) {
        size_t min_idx = i;
        for (size_t j = i + 1; j < size; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swap(arr[i], arr[min_idx]);
        }
    }
}

// size() metoduna sahip türler için printArray
template <typename T>
void printArray(const T& arr) {
    cout << "[";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i] << (i < arr.size() - 1 ? ", " : "");
    }
    cout << "]" << endl;
}

// Temel diziler için printArray
template <typename T>
void printArray(const T arr[], size_t size) {
    cout << "[";
    for (size_t i = 0; i < size; ++i) {
        cout << arr[i] << (i < size - 1 ? ", " : "");
    }
    cout << "]" << endl;
}

int main() {
    vector<int> v {6, 2, 8, 7, 1, 3};
    array<string, 4> a {"chien"s, "chat"s, "souris"s, "poisson"s};
    double t[] = {6.1, 2.2, 8.3, 7.4, 1.5, 3.6};

    cout << "Vektor oncesi: ";
    printArray(v);
    selectionSort(v);
    cout << "Vektor sonrasi: ";
    printArray(v);

    cout << "\nArray oncesi: ";
    printArray(a);
    selectionSort(a);
    cout << "Array sonrasi: ";
    printArray(a);

    cout << "\nDouble Dizisi oncesi: ";
    printArray(t, sizeof(t)/sizeof(t[0]));
    selectionSort(t, sizeof(t)/sizeof(t[0])); // Artık derleme hatası vermeyecek
    cout << "Double Dizisi sonrasi: ";
    printArray(t, sizeof(t)/sizeof(t[0]));

    return 0;
}
/*
* #include <iostream>
using namespace std;

int main() {
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
    cout<<cercle .rayon;

    return 0;
}
*/







/*
 * template<typename T>
void selectionSort(T& container) {
   auto begin_it = container.begin();
   auto end_it = container.end();

   auto size = distance(begin_it, end_it);

   for(auto i = begin_it ; i != end_it ; ++i) {
      auto min_it = i; // le plus petit élément  à la position actuelle
      for(auto j = next(i) ;  j != end_it ; ++j) {
         if(*j < *min_it) {
            min_it = j;
         }
      }
      //Echanger si le plus petit élément n'est pas dans sa position actuelle
      if(min_it != i) {
         swap(*i , *min_it); //Changer les elements
      }
   }
}

//fonction de tri par sélection surcharge pour les tableaux de style C
template<typename T2, size_t N>
void selectionSort(T2(&array)[N]) {
   for(size_t i = 0; i < N -1 ; ++i) {
      size_t min_idx = i; // index du plus petit élément à la position actuelle

      //analyser les éléments restant
      for(size_t j = i+1 ; j<N ; ++j) {
         if(array[j] < array[min_idx]) {
            min_idx = j;
         }
      }
      //Echanger si le plus petit element n'est pas dans sa position actuelle
      if(min_idx != i) {
         swap(array[i],  array[min_idx]); //Changer les elements
      }
   }
}

// fonction pour imprimer des conteneurs
template <typename Container>
void printContainer(const Container& container) {
   cout<<"[";
   for(auto it = container.begin(); it !=container.end(); ++it) {
      if(it != container.begin())cout<<", ";
      cout<<*it;
   }
   cout<<"]\n";
}

//Fonction d'impression surcharge pour les tableaux de style C
template<typename T, size_t N>
void printContainer(const T (&array)[N]) {
   cout<<"[";
   for(size_t i = 0; i < N ; ++i) {
      if(i != 0) cout<<", ";
      cout<<array[i];
   }
   cout<<"]\n";
}

int main() {
// definition de conteneurs de differents types de données
   vector<int> v {6,2,8,7,1,3};
   array<string, 4> a{"chien", "souris", "chat", "poisson"};
   double t[]= {6.1, 2.2, 8.3, 7.4, 1.5, 3.6};

   //Imprimer les tableaux avant de trier
   cout << "Avant tri:\n";
   printContainer(v);
   printContainer(a);
   printContainer(t);

   // Seçim sıralaması algoritmasını uygula
   selectionSort(v);
   selectionSort(a);
   selectionSort(t);

   // Imprimer les tableaux après le tri
   cout << "\nAprès tri:\n";
   printContainer(v);
   printContainer(a);
   printContainer(t);



   return 0;
}

 */


