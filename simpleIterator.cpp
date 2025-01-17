//
// Created by Krm on 17/01/2025.
//
#include <iostream>
#include <vector>
using namespace std;

class simpleIterator {
private :
    int * ptr;

public:
    simpleIterator(int *p) : ptr(p){}

    //operator*

    int operator*() const{
        return *ptr;
    }

    //operator++(prefix):
    simpleIterator& operator++() {
        ++ptr;
        return *this;
    }

    //operator != iki iteratorun ayni elemani isaret edip etmedigini kontrol eder

    bool operator !=(const simpleIterator& other) const {
        return ptr != other.ptr;
    }

    //begin(), renvoie un itérateur qui pointe vers le debut de la séquence
    simpleIterator begin(int arr[]) {
        return simpleIterator(arr);
    }

    //end(),

    simpleIterator end(int arr[]) {
        return simpleIterator(arr + 5);
    }
};

int main() {
    int arr [] = {1,2,3,4,5};
    cout<<"nous parcourons le tableau avec notre propre itérateur: ";

    for(simpleIterator it = begin(arr); it!=end(arr); ++it) {
        cout<<*it<<" ";
    }
    cout<<endl;

}