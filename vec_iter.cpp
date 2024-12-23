//
// Created by Krm on 23/12/2024.
//



/*
#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
* template<typename T>
vector<typename vector<T>::const_iterator> vect_iter_val(const vector<T>& vec, const T& val) {
    vector<typename vector<T>::const_iterator> result;// vecteur pour stocker les iterateurs
    for(auto it = vec.begin(); it != vec.end() ; ++it) {
        if(*it == val) {// si la valeur pointe par iterateur est egale a la value
            result.push_back(it);
        }
    }
    return result;  // Retourne le vecteur d'iterateurs
}

int main() {
    const vector<int> v = {1, 2, 3, 2, 4, 2, 2, 6, 2};

    int valToSearch = 2;

    vector<vector<int>::const_iterator> iters =  vect_iter_val(v, valToSearch);

    cout<<"vecteur d'entiers :";
    for(int x : v) {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"Vecteur d'iterateurs : ";
    for(auto it: iters) {
        cout<<*it<<" "; // affichela caleur pointée par chaque iterateur
    }cout<<endl;

    cout<<"Positions : ";
    for(auto it : iters) {
        cout<<distance(v.begin(), it )<< " "; // Affiche la position de chaque iterateur
    }

}


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


template<typename T>
vector<typename vector<T>::const_iterator> vec_iter_val(const vector<T> & vecteur, const T& valeurRechercee) {
    vector<typename vector<T>::const_iterator> vectorIterateurs;

    // Itérateur pour parcourir le vecteur
    auto it = vecteur.cbegin();

    // Boucle pour trouver toutes les occurrences de 'valeurRecherchee'

    while(it != vecteur.cend()) {
        it = find(it, vecteur.cend(), valeurRechercee);
        if(it != vecteur.cend()) {
            vectorIterateurs.push_back(it);
            ++it;
        }
    }

    return vectorIterateurs;
    }

int main() {
    // Déclaration d'un vecteur constant d'entiers
    const vector<int> v {1, 2, 3, 2, 4, 2, 2, 6, 2};

    // valeurà rechercher
    int valeur = 2;

    //Appel de la fonction vec_iter
    vector<vector<int>::const_iterator> vecIterateurs = vec_iter_val(v, valeur );

    //Affichage des resultats
    cout<<"Vecteur d'entiers: [";
    for(size_t i =0; i < v.size(); ++i) {
        cout<<v[i];
        if(i != v.size() -1 ) cout<<", ";
    }
    cout<<"]";

    cout << "Vecteur d'itérateurs pointant vers la valeur " << valeur << " : [";
    for(size_t i = 0; i < vecIterateurs.size(); ++i) {
        cout<<*(vecIterateurs[i]);
        if(i != vecIterateurs.size()- 1 )cout<<", ";
    }
    cout<<"]"<<endl;

    // Optionnel : Afficher les indices des itérateurs trouvés

    cout << "Indices des occurrences de " << valeur << " : [";
    for(size_t i = 0; i<vecIterateurs.size() ; ++i) {
        cout<<distance(v.begin(), vecIterateurs[i]);
        if(i != vecIterateurs.size() - 1 ; cout<<", ");
    }
    cout<<"]"<<endl;

    return 0;
}
//Fonction Template pour Échanger Deux Valeurs (swap)
#include <iostream>
using namespace std;

template<typename T>
void swapValues(T& a, T& b) {
    T tem = a;
    a = b;
    b = tem;
}
int main() {
    int x = 5;
    int  y= 10;

    double m = 1.5, n = 2.5;
    swapValues(m, n);
    cout<<"avant: "<<endl;
    cout<<x<<endl;
    cout<<y<<endl;

     swapValues(x,y);
    cout<<"apres: "<<endl;
    cout<<m<<endl;
    cout<<n<<endl;
}

template<typename T>
T maxValue( const T& a, const T& b) {
    T result = (a > b ? a : b);
    return result;
}
int main() {

    int max =maxValue (3, 333);

    auto  Double =maxValue (4.3, 3.4);
    cout<<max<<endl;
   cout<< Double;

}

#include <iostream>
#include <vector>
using namespace std;

template<typename T>
T sumArray(const vector<T>& vec) {
    T somme =0; // oou T somme =T();
    for(size_t i = 0; i<vec.size(); ++i) {
        somme += vec[i];
    }

    return somme;
}

int main() {

    vector<int> myVec = {1,2,3,4,5};


    cout<< sumArray(myVec)<<endl;
}

template<typename T>
T sumArray (const vector<T>& vec) {
    return accumulate(vec.begin(), vec.end(), T());
}

int main() {
    vector<string> vecString = {"Bonjour", " ", "le", " ", "monde"};


   auto resultat = sumArray(vecString);

    // Affichage du résultat
        cout << "La somme des éléments du vecteur est : " << resultat << endl;

    return 0;
}

template<typename T>
void reverseArray(vector<T> & vec) {
    auto begin = vec.begin();

    auto end = vec.end() -1;
    while(begin < end) {
        swap(*begin, * end);
        begin++;
        end--;
    }
}
int main() {
    vector<int> vecInt = {1, 2, 3, 4, 5};

    reverseArray(vecInt);

    for(auto const & i : vecInt) {
        cout<<i<< " ";
    }

    return 0;
}
template<typename T>
bool areEqual(const vector<T>& vec1,const vector<T>& vec2) {

    if(vec1.size() == vec2.size()){
           for(size_t i =0 ; i<vec1.size() ; i++) {
        if(!(vec1[i] == vec2[i])) {
            return false;
        }
    }
    }else {
        return false;
    }

    return true;
}


int main() {
    vector<int> vecA = {1, 2, 3};
    vector<int> vecB = {1, 2, 3};
    vector<int> vecC = {1, 2, 4};

    bool result1 = areEqual(vecA, vecB); // result1 = true
    bool result2 = areEqual(vecA, vecC); // result2 = false

    cout<<result2;

    return 0;
}
 */

#include <iostream>
#include <vector>
#include <string>
#include <numeric> // pour std: accumulate
#include <algorithm>
using namespace std;

template<typename container1, typename container2>
bool areEqualContainers(const vector<container1>& vec1, const vector<container2>& vec2) {
    return ((vec1.size() == vec2.size()) && equal(vec1.begin(), vec1.end(), vec2.begin()));
}

int main() {
    vector<int> vecA = {1,2,3,4};
    vector<int> vecB = {1,2,3,4};
    vector<int> vecC = {1,2,3,44};

    cout<<areEqualContainers(vecA, vecB);
    cout<<"\n"<<areEqualContainers(vecC, vecB)<< endl;




    return 0;
}










