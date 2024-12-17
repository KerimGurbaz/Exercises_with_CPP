//
// Created by Krm on 17/12/2024.
#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>


/*
* int main() {

    // sort a vector;
vector<int> vec = {4,2, 3, 1, 5};

    //sort element of vector
    sort(vec.begin(), vec.end(),greater<int>());

    for(int num : vec) {
        cout<<num<<" ";
    }


    return 0;
}
 */

int main() {
    vector<int> source = {1,2,3,4,5};
    // create destination vector of size 5
    vector<int> destination(5);
copy(source.begin(), source.end(), destination.begin());

    //Print elements of destination vector
    for(int num : destination) {
        cout<<num<<" ";
    }
return 0 ;
}
