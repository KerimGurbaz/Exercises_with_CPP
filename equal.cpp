//
// Created by Krm on 06/01/2025.
//
#include <iostream>
#include <array>
#include <vector>
#include <list>
//include "equal_set.h"

using namespace std;

template<typename T1, typename T2,typename T3>

bool equal_set(const vector<T1>& vec1,const vector<T2>& vec2) {
    vector<T1> cV1 = vec1;

}


int main() {



    array set1{ 1, 2, 3, 4, 5};
    vector set2{ 1, 3, 5, 2, 4, 2, 1, 3, 4};
    list set3{2, 4, 3, 5, 6, 4, 3, 1};

    cout << boolalpha;
    cout << "s1 == s2 : " << equal_set(set1.cbegin(), set1.cend(), set2.cbegin(), set2.cend()) << endl;
    cout << "s2 == s1 : " << equal_set(set2.cbegin(), set2.cend(), set1.cbegin(), set1.cend()) << endl;
    cout << "s1 == s3 : " << equal_set(set1.cbegin(), set1.cend(), set3.cbegin(), set3.cend()) << endl;
    cout << "s3 == s1 : " << equal_set(set3.cbegin(), set3.cend(), set1.cbegin(), set1.cend()) << endl;
    cout << "s2 == s3 : " << equal_set(set2.cbegin(), set2.cend(), set3.cbegin(), set3.cend()) << endl;
    cout << "s3 == s2 : " << equal_set(set3.cbegin(), set3.cend(), set2.cbegin(), set2.cend()) << endl;
}