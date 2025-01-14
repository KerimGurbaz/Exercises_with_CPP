//
// Created by Krm on 14/01/2025.
//
#include <iostream>
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
 */
#include <vector>
template<typename T>

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
