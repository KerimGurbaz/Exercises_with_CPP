//
// Created by Krm on 27/12/2024.
//
#include <iostream>
using namespace std;

template <typename T>
T& min(T& a, T& b, T& c) {
    T* minimum = &a; //prenez au minimum pour commencer

    if(b < *minimum) {
        minimum = &b;
    }

    if(c< *minimum) {
        minimum = &c;
    }

    return *minimum; // reference de retour de la valeur minimale
}

int main() {
    int a = 5;
    int b = 2;
    int c = 9;
    cout << "Minimum (int): " << min(a, b, c) << endl;

    min(a, b, c) = 1;
    cout << "Yeni a: " << a << ", b: " << b << ", c: " << c << endl;

    // Ondalık sayılarla örnek
    double d = 5.0;
    double e = 2.0;
    double f = 9.0;

    cout << "Minimum (double): " << min(d, e, f) << endl; // Çıktı: 2.0

    min(d, e, f) = 1.0; // Minimum değeri 1.0 yap
    cout << "Yeni d: " << d << ", e: " << e << ", f: " << f << endl; // Çıktı: d=5.0, e=1.0, f=9.0

    double& min_def = min(d, e, f);
    cout << "min_def referansı: " << min_def << endl; // Çıktı: 1.0


}