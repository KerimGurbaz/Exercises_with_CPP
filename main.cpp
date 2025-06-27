#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
* template <typename T>
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

template<typename T>
void echanger(T& a, T&b) {
    T temp = b;
    b  = a;
    a=temp;
}

int main() {
    int n1 = 100, n2 = 200;
    cout << "Avant échange: n1=" << n1 << ", n2=" << n2 << endl;
    echanger(n1, n2);
    cout << "Après échange: n1=" << n1 << ", n2=" << n2 << endl;

    cout << endl;

    string prenom = "Jean", nom = "Dupont";
    cout << "Avant échange: prenom=\"" << prenom << "\", nom=\"" << nom << "\"" << endl;
    echanger(prenom, nom);
    cout << "Après échange: prenom=\"" << prenom << "\", nom=\"" << nom << "\"" << endl;
}

template <typename T>
void reinitialiser(T&x, T&y, T&z) {
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

int main() {
    double pointX = 53.12, pointY= -10.23, pointZ = 83.123;

    cout << "Avant réinitialisation: X=" << pointX << ", Y=" << pointY << ", Z=" << pointZ << endl;
    reinitialiser(pointX, pointY, pointZ);
    cout << "Après réinitialisation: X=" << pointX << ", Y=" << pointY << ", Z=" << pointZ << endl;

    return 0;

}template <typename T>
T& min(T& a, T& b) {
    return a < b ? a : b;

}

template <typename T>
T& min(T& a, T& b, T& c) {
    return min(a, min(b,c));
}
int main() {
    cout << "--- Test avec des entiers (int) ---" << endl;
    int a = 5;
    int b = 2;
    int c = 9;

    cout << "Valeurs initiales : a=" << a << ", b=" << b << ", c=" << c << endl;

    // L'appel min(a, b, c) résout en min(a, min(b, c)) -> min(5, ref_to_b) -> ref_to_b
    cout << "Le minimum est : " << min(a, b, c) << endl; // Affiche 2

    // min(a, b, c) retourne une référence à 'b'. L'instruction devient 'b = 1;'.
    min(a, b, c) = 1;
    cout << "Valeurs après 'min(a, b, c) = 1;' : a=" << a << ", b=" << b << ", c=" << c << endl;

    // min(a, b, c) retourne maintenant une référence à 'b' (qui vaut 1).
    // 'd' devient un alias pour 'b'.
    int& d = min(a, b, c);
    d = 0; // Modifier 'd' modifie 'b'.
    cout << "Valeurs après modification via référence 'd' : a=" << a << ", b=" << b << ", c=" << c << endl;

    return 0;
}
template<typename T>
void clamp(T& valeur, const T& min,const T&max) {
    valeur = valeur < min ?min : (valeur < max ? valeur : max);
}

int main() {

    int v1 = -5, min_v = 0, max_v = 100;
    clamp(v1, min_v, max_v); // v1 devient 0
    cout << "clamp(-5) dans [0, 100] -> " << v1 << endl;
    int v2 = 150;
    clamp(v2, min_v, max_v); // v2 devient 100
    cout << "clamp(150) dans [0, 100] -> " << v2 << endl;

    int v3 = 50;
    clamp(v3, min_v, max_v); // v3 reste 50
    cout << "clamp(50) dans [0, 100] -> " << v3 << endl;
    return 0;
}
#include <algorithm>
#include <vector>
int clamp(int &val,const int &a,const int&b) {
    val = std::clamp(val, a, b);
    return val;
}
template <typename T>
T clamp_returning_value(T& valeur, const T& min, const T& max) {
    return valeur <min ? min : (valeur > max ? max :valeur);
}

int main() {
    int v1 = -5, min_v = 0, max_v = 100;
    clamp_returning_value(v1, min_v, max_v); // v1 devient 0
    cout << "clamp(-5) dans [0, 100] -> " << v1 << endl;

    int v2 = 150;
    clamp_returning_value(v2, min_v, max_v); // v2 devient 100
    cout << "clamp(150) dans [0, 100] -> " << v2 << endl;
}
#include <algorithm>
#include <vector>
using namespace std;
int main() {
vector<int> data = {-10, 50,150, 25, 99, 1001};
int min_val = 0;
int max_val = 100;

    cout<<"avant"<<endl;
    for(int value : data) {
        cout<<value<<" ";
    }
    cout<<endl;

transform(data.begin(),data.end(), data.begin(), [](int val) {
    return val> 100 ? 100 : val;
});

cout<<"apres"<<endl;
    for(int val : data) {
        cout<<val<<" ";   }
    return 0;
}

 */
template<typename T>
T& select(T& a, T&b, bool select_a) {
    return select_a ? a : b;
}

int main() {
    string str1 = "Hello", str2 = "World";
    cout << "str1: " << str1 << ", str2: " << str2 << endl;

    // 'ref' devient une référence à str1
    select(str1, str2, true) = "Bonjour";

    cout << "Après 'select(..., true) = ...' -> str1: " << str1 << ", str2: " << str2 << endl;

    // 'ref' devient une référence à str2
    select(str1, str2, false) = "Monde";

    cout << "Après 'select(..., false) = ...' -> str1: " << str1 << ", str2: " << str2 << endl;

    return 0;
}

