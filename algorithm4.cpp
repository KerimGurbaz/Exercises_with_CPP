//
// Created by Krm on 20/12/2024.
//
#include <iostream>
#include <vector>
using namespace std;


vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};



int main() {

    // no 1
    vector v1(v.begin(), v.end());
    vector<int> v2(v.begin() + 1, v.end() - 2);
    vector<int> v3(v.rbegin() + 1, v.rend() - 2);
    v3.assign(v2.begin() + 1, v2.end() - 4);
    v3.erase(v3.begin());
    v3.insert(v3.begin(), v.begin(), v.begin() + 2);
    v3.insert(v3.begin(), v.rbegin(), v.rbegin() + 2);
    for(int num : v2) {
        cout<<num<<" ";
    }

cout<<endl;

    for(int num : v3) {
        cout<<num<<" ";
    }


    return 0;
}