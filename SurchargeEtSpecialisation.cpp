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

//fonction sablonu -Transformer
template<typename T, size_t N, typename Fct>
void transformer(array<T,N>& arr, Fct fct) {
    for(size_t i = 0; i < N ; ++i ) {
        arr[i] = fct(arr[i]);
    }
}

int main() {

    cout << opposer(42) << " "
         << opposer(42u) << " "
         << boolalpha << opposer(true) << " "
         << opposer(false) << " "
         << opposer(-3.14) << endl;

    array<int,0> a0;                                      cout << a0 << endl;

    array<int, 4> a4 { 1, 2, 3,  4 };                     cout << a4 << endl;
    transformer(a4, opposer<int>);                        cout << a4 << endl;

    array<bool,0> b0;                                     cout << b0 << endl;

    array<bool, 5> b5 { true, false, false, true, true }; cout << b5 << endl;
    transformer(b5, opposer<bool>);                       cout << b5 << endl;

    array<double,0> c0;                                   cout << c0 << endl;

    array<double, 3> c3 { 1.61, 2.72, 3.14 };             cout << c3 << endl;
    transformer(c3, opposer<double>);                     cout << c3 << endl;


    return 0;
}


