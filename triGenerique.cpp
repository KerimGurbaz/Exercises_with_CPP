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

