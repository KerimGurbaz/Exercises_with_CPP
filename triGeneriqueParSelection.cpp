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
//Yazdirma (vektor icin)
template <typename T>
void printArray(const vector<T>& arr)
{
    cout << "[";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << (i < arr.size() - 1 ? ", " : "");
    }
    cout << "]" << endl;
}

//Yazdirma (array icin)
template <typename T, size_t N>
void printArray(const array<T, N>& arr)
{
    cout << "[";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << (i < arr.size() - 1 ? ", " : "");
    }
    cout << "]" << endl;
}

//Yazdirma (T[] icin)
template <typename T, size_t N>
void printArray(const T(&arr)[N])
{
    cout << "[";
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << (i < N - 1 ? ", " : "");
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
    selectionSort(t, sizeof(t)/sizeof(t[0]));
    cout << "Double Dizisi sonrasi: ";
    printArray(t, sizeof(t)/sizeof(t[0]));

    return 0;
}

