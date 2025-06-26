#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
void permuterCirculaireDroite( T&a, T&b, T&c) {
    T temp = c;
    c = b;
    b = a;
    a = temp;
}
int main() {
    // --- Test avec des entiers (int) ---
    cout << "--- Permutation d'entiers ---" << endl;
    int x = 10, y = 20, z = 30;
    cout << "Avant : a=" << x << ", b=" << y << ", c=" << z << endl;
    permuterCirculaireDroite(x, y, z);
    cout << "Après : a=" << x << ", b=" << y << ", c=" << z << endl;
    cout << endl;

    // --- Test avec des réels (double) ---
    // Ceci répond à la deuxième partie spécifique de la question.
    cout << "--- Permutation de doubles ---" << endl;
    double d1 = 1.1, d2 = 2.2, d3 = 3.3;
    cout << "Avant : d1=" << d1 << ", d2=" << d2 << ", d3=" << d3 << endl;
    permuterCirculaireDroite(d1, d2, d3);
    cout << "Après : d1=" << d1 << ", d2=" << d2 << ", d3=" << d3 << endl;
    cout << endl;

    // --- Test avec des chaînes de caractères (std::string) ---
    cout << "--- Permutation de chaînes ---" << endl;
    string s1 = "un", s2 = "deux", s3 = "trois";
    cout << "Avant : s1=\"" << s1 << "\", s2=\"" << s2 << "\", s3=\"" << s3 << "\"" << endl;
    permuterCirculaireDroite(s1, s2, s3);
    cout << "Après : s1=\"" << s1 << "\", s2=\"" << s2 << "\", s3=\"" << s3 << "\"" << endl;

    return 0;
}