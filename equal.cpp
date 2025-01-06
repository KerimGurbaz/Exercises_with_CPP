//
// Created by Krm on 06/01/2025.
//
#include <iostream>
#include <array>
#include <vector>
#include <list>
//include "equal_set.h"

using namespace std;

#pragma once
#include<algorithm>
template<typename Iterator1>
void make_set(std::vector<Iterator1>&v){
    std::sort(v.begin(),v.end());
    auto iter= std::unique(v.begin(), v.end());
    v.erase(iter, v.end());
}

template<typename Iterator1, typename Iterator2 >
bool equal_set(Iterator1 cbeg, Iterator1 cend, Iterator2 cbeg2, Iterator2 cend2){
    vector<int> vec1(cbeg, cend);
    vector<int> vec2 (cbeg2, cend2);
    make_set(vec1);
    make_set(vec2);

    if(vec1.size() != vec2.size()){
        return false;
    }
    return std::equal(vec1.begin(),vec1.end(),vec2.begin());

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