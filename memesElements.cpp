//
// Created by Krm on 24/12/2024.
//
#include <iostream>>
#include <vector>
#include <algorithm>
#include <span>
#include <array>

using namespace std;

template<typename T>
ostream& operator<<(ostream& os, span<T> s){
    os<<"[";
    for(size_t i = 0; i<s.size(); ++i){
        if(i) os<<", ";
        os<<s[i]
    }
    return os<< "]";

}

int main(){

array<int, 3> a = {1,2,3};
vector<int> v = {1,2,3,4,1,2,3,4};

copy(v.begin(), v.end(), a.begin());
cout<<span<int>(a);

// no 2
copy(a.begin(), a.end(), v.rbegin());

cout << span<int>(v) << endl;
// no 6
remove(v.begin(), v.end(), 2);

cout << span<int>(v) << endl;

return 0;
}




/*
*#include <any>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Affichage d'un Vecteur
template<typename T>
void myVec(const vector<T>& vec) {
    for(const auto& elem : vec) {
        cout << elem << " ";
    }
}

int main() {

    vector<int> vec = {1,2,3,4,5,6};

    myVec(vec);

    return 0;
}

//minimum de Deux Valeurs
template<typename T>
T myMin( const T& var1, const T& var2) {
   return (var1 < var2 ? var1 : var2);
}

int main() {
    cout<<myMin(11111, 1123);

    return 0;
}
* //Maximum de Deux Valeurs
template<typename T>
T myMax( const T& var1, const T& var2) {
    if (var1> var2) {
        return var1;
    }else if(var2 > var1) {
        return var2;
    }else {
        cout<<"les valeur sont memes. ";
    }
}

int main() {
    cout<<myMax(1123, 1123);

    return 0;
}
 */

/*
 *
 *
 *
*template <typename T>
void mySwap( T& var1, T& var2) {
    T temp = var1;
    var1 = var2;
    var2 = temp;
};

int main() {

    int a = 3;
    int b = 5;

    string str1 ="krm";
    string str2 = "grbz";

    //mySwap(a,b);
    //mySwap(str1,str2);

    cout<<a<< " "<< b<<endl;
    cout<<str1<< " "<< str2<<endl;

    swap(a,b);
    swap(str1,str2);

    cout<<a<< " "<< b<<endl;
    cout<<str1<< " "<< str2<<endl;

    return 0;
}
*
template<typename T>
bool meme_elements(vector<T> vec1, vector<T> vec2) {
    for(const auto & elem: vec1) {
        auto it = find(vec2.begin(), vec2.end(), elem);
        if(it == vec2.end()) {
            return false;
        }else {
            vec2.erase(it);
        }

    }

    return vec2.empty(); // Si tous éléments sont trouves , renvoyes true.
}


int main() {
    vector<int> vec1 = {1,2,3,4,1,2};
    vector<int> vec2 = {4,3,2,1};
    if (meme_elements(vec1, vec2)) {
        cout << "Les deux tableaux ont les mêmes éléments." << endl;
    } else {
        cout << "Les deux tableaux n'ont pas les mêmes éléments." << endl;
    }

    return 0;
}
 */