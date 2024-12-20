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

// no 12
template <typename T>
void f(const T tab[]) {
    vector<T> v (tab.begin(), tab.end());
    display(v.begin(), v.end());
}


vector<int> v{1,2,3,4,5,6,7,8,9,10};
int tab[] = {1,2,3,4,5,6,7,8,9,10};

int main() {
    // no 5
  //  display(v.begin() + 5, v.begin() + 4);
    // no 15
    //display(v.rend(), v.rbegin());
    display(v.begin(), v.end());
    display(v.rbegin() + 1, v.rend() - 3);
    return 0;
}