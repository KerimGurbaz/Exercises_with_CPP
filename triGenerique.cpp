//
// Created by Krm on 28/12/2024.
//
#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <algorithm>
using namespace std;

template<typename T>
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



