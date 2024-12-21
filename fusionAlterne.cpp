#include <iostream>
#include <array>
#include <vector>
#include <span>

using namespace std;


template <typename T>
ostream& operator<< (ostream& os, span<T> s) {
    os << "[";
    for (size_t i=0; i<s.size(); ++i) {
        if (i) os << ", ";
        os << s[i];
    }
    return os << "]";
}

// Fonction générique pour concaténer deux plages de données
