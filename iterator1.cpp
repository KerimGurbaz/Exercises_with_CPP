//
// Created by Krm on 19/12/2024.
//


/*#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <list>
#include <iterator>
#include <iomanip>

using namespace std;
* //Definition de la fonction template display
template <typename iterator>
void display(iterator first, iterator last) {
    for(auto it =first ; it != last; ++it) {
       // cout<<*it<<"\t"<<static_cast<const void*>(&(*it))<<endl;
        cout << *it    << "\t";
        cout << (const void*)&(*it) << endl;
    }
}


int main() {
    array<int, 3> a{1,2,3};

    vector<double> v{1.1, 2.2, 3.3};
    string s("HEIG-VD"s);
    list<string> l {"chien"s, "chat"s, "souris"s};

    cout<<"array"<<endl;
    display(a.cbegin(), a.cend());

    cout<<"\nvector"<<endl;
    display(v.cbegin(), v.cend());

    cout<<"\nstring"<<endl;
    display(s.cbegin(), s.cend());

    cout<<"\nlist"<<endl;
    display(l.cbegin(), l.cend());



    return 0;
}

 */

#include <iostream>
#include <vector>

using namespace std;

template<typename iterator>
void display(iterator first, iterator last) {
    for(iterator it = first ; it != last ; ++it) {
        if(it != first) {
            cout<<", ";
        }
        cout<<*it;
    }
    cout<<endl;
}


int main() {
    vector<int> v {1,2,3,4};

    display(v.cbegin(), v.cend());

    // creation d'itérateurs constants pointant au debut et à la fin du vecteur
    vector<int>::const_iterator begin = v.cbegin();
    vector<int>::const_iterator end = v.cend();

    // Ajout d'un élément au vector
    v.push_back(5);

    display(v.cbegin(), v.cend());

    display(begin, end);



}

