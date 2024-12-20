//
// Created by Krm on 20/12/2024.
//
#include <iostream>
#include<vector>
using namespace std;

template <typename iterator>
void display(iterator first, iterator last) {
    cout<<"[";
    for(iterator it = first; it != last; ++it) {
        if(it != first)cout<<", ";
        cout<<*it;
    }
    cout<<"]\n";
}

vector<int> v{1,2,3,4,5,6,7,8,9,10};
int tab[] = {1,2,3,4,5,6,7,8,9,10};

int main() {
    // no 5
    display(v.begin() + 5, v.begin() + 4);

    return 0;
}