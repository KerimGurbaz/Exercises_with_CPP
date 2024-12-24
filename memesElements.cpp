//
// Created by Krm on 24/12/2024.
//
#include <any>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


template<typename T>
bool meme_elements(vector<T> vec1, vector<T> vec2) {
    for(const auto & elem: vec1) {
        auto it = find(vec2.begin(), vec2.end(), elem);
        if(it == vec2.end()) {
            return false;
        }else {
            vec2.erase(it);
        }

    }

    return vec2.empty(); // Si tous éléments sont trouves , renvoyes true.
}


int main() {
    vector<int> vec1 = {1,2,3,4,1,2};
    vector<int> vec2 = {4,3,2,1};
    if (meme_elements(vec1, vec2)) {
        cout << "Les deux tableaux ont les mêmes éléments." << endl;
    } else {
        cout << "Les deux tableaux n'ont pas les mêmes éléments." << endl;
    }

    return 0;
}