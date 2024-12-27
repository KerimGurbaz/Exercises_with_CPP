//
// Created by Krm on 27/12/2024.
//
#include <iostream>
#include <algorithm>

using namespace std;


template <typename T>
void permutationCirculaireDroite(T& a, T& b, T& c) {
    swap(a, b);
    swap(b, c);
}

int main() {
    // Exemples d'utilisation avec différents types:

    // Avec des entiers (int)
    int x = 10, y = 20, z = 30;
    cout << "Avant permutation (int): x=" << x << ", y=" << y << ", z=" << z << endl;
    permutationCirculaireDroite(x, y, z);
    cout << "Apres permutation (int): x=" << x << ", y=" << y << ", z=" << z << endl;

    // Avec des nombres à virgule flottante (double)
    double d1 = 1.1, d2 = 2.2, d3 = 3.3;
    cout << "Avant permutation (double): d1=" << d1 << ", d2=" << d2 << ", d3=" << d3 << endl;
    permutationCirculaireDroite(d1, d2, d3);
    cout << "Apres permutation (double): d1=" << d1 << ", d2=" << d2 << ", d3=" << d3 << endl;

    // Avec des caractères (char)
    char c1 = 'A', c2 = 'B', c3 = 'C';
    cout << "Avant permutation (char): c1=" << c1 << ", c2=" << c2 << ", c3=" << c3 << endl;
    permutationCirculaireDroite(c1, c2, c3);
    cout << "Apres permutation (char): c1=" << c1 << ", c2=" << c2 << ", c3=" << c3 << endl;

    // Avec des chaînes de caractères (string)
    string s1 = "un", s2 = "deux", s3 = "trois";
    cout << "Avant permutation (string): s1=" << s1 << ", s2=" << s2 << ", s3=" << s3 << endl;
    permutationCirculaireDroite(s1, s2, s3);
    cout << "Apres permutation (string): s1=" << s1 << ", s2=" << s2 << ", s3=" << s3 << endl;

    return 0;
}


/*
* #include <iostream>
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
 */