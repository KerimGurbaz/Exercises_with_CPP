//
// Created by Krm on 28/12/2024.
//
#include <iostream>
#include <vector>
#include <array>
#include <string>
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
         swap(*i < *min_it); //Changer les elements
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



