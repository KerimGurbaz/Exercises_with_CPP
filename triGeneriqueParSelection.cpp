//
// Created by Krm on 30/12/2024.
//
#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <algorithm>


using namespace std;

template<typename T, size_t N>
void selectionSort(T(&arr)[N]) {// Pour tableau(taille fixe)
    for(size_t i =0; i < N-1 ; ++i) {
        size_t min_idx = i;
        for(size_t j = i+1; j < N ; ++j) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if(min_idx != i) {
            swap(arr[i], arr[min_idx]);
        }
    }
}

template<typename T>
void selectionSort(vector<T>& arr) {//pour vecteur
    for(size_t i =0; i <arr.size() - 1; ++i) {
        size_t min_idx = i;
        for(size_t j = i+1 ; j < arr.size(); ++j) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if(min_idx !=i) {
            swap(arr[i], arr[min_idx]);
        }
    }
}

template<typename T, size_t N>
void selectionSort(array<T, N>& arr) {
    for(size_t i = 0; i < N -1 ; ++i) {
        size_t min_idx = i;
        for(size_t j = i+1; j < N ; ++j) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if(min_idx != i) {
            swap(arr[i], arr[min_idx]);
        }

    }
}


// Pour l'imprimer
template<typename T>
void PrintAray(const T& arr) {
    cout<<"[";
    for(size_t i = 0; i <arr.size(); ++i) {
        cout<<arr[i] <<(i < arr.size() -1 ? ", " : "");
    }
    cout<<"]\n";
}

template <typename T, size_t N>
void printArray(const T(&arr)[N]) {
    cout<<"[";
    for(size_t i =0; i<N; ++i) {
        cout<<arr[i]<<(i < N -1 ? ", " : "");
    }
    cout<<"]\n";
}

int main() {

    vector<int> v {6, 2, 8, 7, 1, 3};
    array<string, 4> a {"chien"s, "chat"s, "souris"s, "poisson"s};
    double t[] = {6.1, 2.2, 8.3, 7.4, 1.5, 3.6};



    return 0;
}

