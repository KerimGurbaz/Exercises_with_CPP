//
// Created by Krm on 27/12/2024.
//
#include <iostream>
using namespace std;

// fonction template pour la permutation circulaire droite
template<typename T1, typename T2, typename T3>
void permutationCirculaireDroite(T1& a, T2& b, T3& c) {
    auto temp = a;
    a = b ;
    b = c;
    c = temp;
}

int main() {
    // Exemple avec types différents
    int i = 1;
    float f = 2.5f;
    double d = 3.14;

    cout << "Avant permutation (types différents):" << endl;
    cout << "i = " << i << ", f = " << f << ", d = " << d << endl;
    permutationCirculaireDroite(i, f, d);
    cout << "Après permutation (types différents):" << endl;
    cout << "i = " << i << ", f = " << f << ", d = " << d << endl;

    char a = 'A';
    char b = 'B';
    char c = 'C';

    cout << "\nAvant permutation (mêmes types):" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    permutationCirculaireDroite(a, b, c);

    cout << "Après permutation (mêmes types):" << endl;
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;


}