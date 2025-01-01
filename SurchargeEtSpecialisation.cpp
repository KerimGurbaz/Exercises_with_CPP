//
// Created by Krm on 01/01/2025.
//
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
const char* BOOL_EN_FRANCAIS[] = {"faux", "vrai"};

template<typename T>
T opposer(const T& value) {
    return -value;
}

// Fonksiyon şablonu - opposer (bool için özelleştirme)
template<>
bool opposer<bool>(const bool& value) {
    return !value;
}

// Fonksiyon şablonu - afficher (array için)
template<typename T, size_t N>
void afficher(const array<T,N>& arr) {
    cout<<"[";
    if(N==0) {
        cout<<"vide";
    }else {
        for(size_t i =0;  i<N ; ++i) {
            cout<<arr[i]<<(i < N-1 ? ", " : "");
        }
    }
    cout<<"]"<<endl;
}

//Fonksiyon şablonu - afficher (bool array için özelleştirme)
template<size_t N>
void afficher(const array<bool, N>& arr) {
    cout<<"[";
    if(N == 0) {
        cout<<"vide";
    }else {
        for(size_t i =0 ; i < N; ++i) {
            cout<<BOOL_EN_FRANCAIS[arr[i]]<<(i < N-1 ? ", " : "");
        }
    }
    cout<<"]"<<endl;
}


// operator<< aşırı yüklemesi (array için)
template<typename T, size_t N>
ostream& operator<<(ostream& os, const array<T, N>& arr) {
    afficher(arr);
    return os;
}



