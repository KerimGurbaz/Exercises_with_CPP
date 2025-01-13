//
// Created by Krm on 12/01/2025.
//
#include <iostream>
#include <vector>
using namespace std;



/*
*template<typename Iterator>
typename Iterator::value_type somme_elements(Iterator debut, Iterator fin) {
    typename Iterator::value_type somme;
    for(Iterator it = debut ; it != fin; ++it) {
        somme += *it;
    }
    return somme;
}

int main() {

    vector<string> mots = {"Hello" , " ", "world", " ","!", " Have", " a" ," nice", " day!" };
    cout<<somme_elements(mots.begin()+2 , mots.end() -2);


    return 0;
}
 *
 *
*#include <iostream>
#include <vector>
#include <list>


#include <iostream>
#include <vector>
#include <list>

// Fonksiyonu const referans olarak alıyoruz, böylece kopyalama yapılmaz ve orijinal konteyner korunur
template <typename Container>
typename Container::const_iterator find_element(const Container& c, const typename Container::value_type& val) {
    // Container::const_iterator türünde bir iterator tanımlıyoruz
    for(typename Container::const_iterator it = c.begin(); it != c.end(); ++it) {
        if(*it == val) {
            return it;
        }
    }
    return c.end();
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::list<std::string> lst = {"apple", "banane", "orange"};

    // int arama
    auto it1 = find_element(vec, 3);
    if(it1 != vec.end()) {
        std::cout << "Found in vector: " << *it1 << std::endl;
    } else {
        std::cout << "Element not found in vector" << std::endl;
    }

    // string arama
    auto it2 = find_element(lst, std::string("grape")); // "grape" string nesnesine dönüştürülüyor
    if(it2 != lst.end()) {
        std::cout << "Found in list: " << *it2 << std::endl;
    } else {
        std::cout << "Not found in list" << std::endl;
    }

    return 0;
}
template <typename T>
T max_value(T a, T b) {
    return (a > b ? a : b);
}
int main() {
    unsigned int e = 5;
    char f = 'f';
    cout<<max_value<char>(f, e)<<" / " << max_value<unsigned int>(f,e);
}
 */


template<typename T>
T difference(T a, T b) {
    return (a -b);
}

 int main() {
    int x = 5;
    float y = 2.3f;
    cout<<difference<int>(x,y)<<" / "<< difference<float>(x,y);


    return 0;
}