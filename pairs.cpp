









#include "concat_tab.h"
#include <vector>
#include <array>
#include <span>
#include <iostream>

using namespace std;

template <typename T, size_t N>
ostream& operator<< (ostream& os, span<T, N> s) {
    os << "[";
    for (size_t i = 0; i < s.size(); ++i) {
        if (i) os << ", ";
        os << s[i];
    }
    return os << "]";
}


#pragma once
#include<vector>



template<typename T,typename Iterator1,typename Iterator2>
std::vector<T> concat_tab(Iterator1 beg1, Iterator1  end1, Iterator2 beg2, Iterator2 end2){

    std::vector vec(beg1, end1);

    while(beg2 != end2){
        vec.push_back(*beg2);
       beg2++;
    }

    return vec;
}

int main() {

    vector v {11, 12, 13};
    array  a {21, 22, 23, 24, 25};

    cout << "vector   : " << span(v) << endl;
    cout << "array    : " << span(a) << endl;

    vector r = concat_tab<int>(v.begin(), v.end(),
                               a.begin(), a.end());

    cout << "resultat : " << span(r) << endl;
}













/*
* //
// Created by Krm on 06/01/2025.
//

#pragma once
#include<algorithm>
#include <vector>

 template<typename Iterator>
 auto elements_pairs(Iterator beg, Iterator end){
     std::vector vec(beg, end);
     std::vector<int>temp;

     std::copy_if(vec.begin(), vec.end(), back_inserter(temp),
                 [](int x){return x %2 == 0;});

     return temp;

 }

#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main() {
    vector<int> v1{1, 2, 3, 9, 8, 7, 4, 5, 6};
    auto w = elements_pairs(v1.begin(), v1.end());
    for(int e : w)
        cout << e << " ";
    cout << endl;

    array v2{4, 3, 2, 6, 5, 7, 8, 3, 4, 9, 2, 8};
    w = elements_pairs(v2.begin(), v2.end());
    for(int e : w)
        cout << e << " ";
    cout << endl;
}
 */