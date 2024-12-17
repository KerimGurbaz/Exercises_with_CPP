//
// Created by Krm on 17/12/2024.
//
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;


/*
* int main() {

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
// Swap contents of two vector -> swap(x,y)
int main() {
    vector<int> vec1 ={1,2,3};
    vector<int> vec2 = {4,5,6};

    // imprimer vec1, vec2 avant l'échange
    cout<<"Before swap : "<<endl;
    cout<<"vec1 : ";
    for(const int  &num : vec1) {
        cout<<num<<" ";
    }
    cout<<endl;

    cout<<"vec2: ";
    for(int num : vec2) {
        cout<<num<<" ";
    }
    cout<<endl;

    // swap vec1 and vec2
    swap(vec1, vec2);

    cout<<"After swap : "<<endl;
    cout<<"vec1 :";
    for(int num : vec1) {
        cout<<num<<" ";
    }cout<<endl;
cout<<"vec2 : ";
    for(int &num : vec2 ) {
        cout<<num<<" ";
    }
    cout<<endl;
}
*
* // Merge two vectors
int main() {
vector<int> vec1 ={1,3,5};
    vector<int> vec2 = {1,2,7};
    vector<int> result(6);

    cout<<"Before merge v1 :";
    for(int num : vec1) {
        cout<<num<<" ";
    }

    cout<<"\nBefore merge v2 :";
    for(int num : vec2) {
        cout<<num<<" ";
    }
    cout<<endl;

    cout<<"perform merge operation"<<endl;
    merge(vec1.begin(), vec1.end(),vec2.begin(), vec2.end(), result.begin() );
    cout<<"After merge : "<<endl;
    cout<<"result: ";
    for(int num: result) {
        cout<<num<< " ";
    }
    cout<<endl;
}

 */


#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main(){
// display thr vector before replacement
    vector<int> vec = {4,2, 3, 2, 5, 6, 2};
cout<<"before"<<endl;;
    for(int num : vec) {
        cout<<num<<" ";
    }
    cout<<endl;

    //replace 2 with 99
    replace(vec.begin(), vec.end(), 2, 99);

    cout<<"after : ";
    for(int num : vec) {
        cout<<num<<" ";
    }
cout<<endl;

}



