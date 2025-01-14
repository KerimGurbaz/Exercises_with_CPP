//
// Created by Krm on 14/01/2025.
//
#include <iostream>
#include <vector>

#include "../../../../Program Files/JetBrains/CLion 2024.1.4/bin/mingw/x86_64-w64-mingw32/include/complex.h"
using namespace std;

/*
* template<typename T>
T twiceValue(T &x) {
    T result = 2*x;
    return result;
}

int main() {

    auto val = 3.14;
    auto val2 = 5;
    auto res = twiceValue<double>(val);
            auto res2 =     twiceValue<int>(val2);

    cout<<res<<endl;
    cout<<res2;
}

void doubleElement(vector<T> & vec) {
    for(T& el : vec) {
        el *= 2;
    }
}

int main() {

    vector<int> intVector= {1,2,3,4,45};
    vector<double> doubleVector = {1.1, 2.3, 5.6};

    cout<<"[";
    for( auto& element : intVector) {
        cout<<element<<" ";
    }
    cout<<"]"<<endl;

    doubleElement(intVector);

    cout<<"[";
    for( auto& element : intVector) {
        cout<<element<<" ";
    }
    cout<<"]";


    return 0;
}
template<typename T>
T myMax(T a, T b) {
   return  (a>b) ? a : b;
}

int main() {
    cout<< myMax<int>(3,6)<<endl;
    cout<< myMax<double>(3.5, 4)<<endl;;
    cout <<myMax<char>('c', 'w');
}
-------------------
template<typename T>
T diff(T a, T b) {
    return (a - b) ;
}
int main() {
    int x =5;
    float  y = 3.3f;

    //cout<<diff<int>(x,y);

    cout<<diff<int>(x,y)<<endl;;
    cout<<diff<double>(x,y);
}
----------------------------------

template<typename T>
T sumElements( const vector<T>& vec) {
    auto sum =0;
    for(const auto & el : vec) {
        sum += el;
    }
    return sum;
}

int main() {
    vector<int> v{1,2,3,4,5};
    //auto res = sumElements(v);
    cout<<sumElements(v);

    return 0;
}
----------------------------
 */

template<typename T>
typename T::value_type sumElements(T begin, T end) {
    typename T::value_type sum =0;
    for(T it = begin; it != end ; ++it) {
        sum += *it;
    }
    return sum;
}

int main() {
    vector<int> v{1,2,3,4,5};
    auto res  = sumElements(v.begin(), v.end());
    cout<<res;
    return 0;
}




