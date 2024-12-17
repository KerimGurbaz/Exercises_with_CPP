//
// Created by Krm on 17/12/2024.
//
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;


int main() {

    vector<string> source = {"apple", "banana", "cherry"};
    vector<string> destination(3);

    cout<<"Before move: "<<endl;
    cout<<"source : ";

    for(const string & str : source) {
        cout<<str<<" ";
    }
    cout<< endl;

    cout<<"destination : " ;
    for(const string & str : destination) {
        cout<<str<< " ";
    }
    cout<<endl;

    // effectuer l'operation de déplacement
    move(source.begin(), source.end(), destination.begin());
    cout<<"After move : "<<endl;
    cout<<"sorce"<<endl;
    for(const string & str : source) {
        cout<<str<< " ";
    }
    cout<< endl;

    cout<<"Destination: ";
    for(const string& str : destination) {
        cout<<str<< " ";
    }
cout<<endl;
    return 0;
}
