//
// Created by Krm on 12/01/2025.
//
#include <iostream>
#include <vector>
using namespace std;

template<typename Iterator>
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