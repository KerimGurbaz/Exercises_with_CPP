/*
 * //
// Created by Krm on 21/01/2025.
//
int i, j, k;

i = 0; k = i++;
cout << "A : i = " << i << " k = " << k << endl;

i = 1; k = ++i;
cout << "B : i = " << i << " k = " << k << endl;

i = 2; j = 3;
k = i++ * ++j;
cout << "C : i = " << i << " j = " << j << " k = " << k << endl;

i = 3; j = 4;
k = i *= --j;
cout << "D : i = " << i << " j = " << j << " k = " << k << endl;
--------------------------------------------------

#include <cstdlib>
#include <iostream>
using namespace std;

int main() {

    int i, j, k;

    i = j = k = 1;
    i += j += k;
    cout << "A : i = " << i << " j = " << j << " k = " << k << endl;

    i = 3; j = 2;
    k = i++ > j || j++ != 3;
    cout << "B : i = " << i << " j = " << j << " k = " << k << endl;

    i = 3; j = 2;
    k = i++ < j || j++ != 3;
    cout << "C : i = " << i << " j = " << j << " k = " << k << endl;

    i = 3; j = 2;
    k = ++i == 3 && ++j == 3;
    cout << "D : i = " << i << " j = " << j << " k = " << k << endl;

    i = 3; j = 2;
    k = ++i > 3 && ++j == 3;
    cout << "E : i = " << i << " j = " << j << " k = " << k << endl;

    return EXIT_SUCCESS;
}
-----------------------------------
  Concaténation-  Indiquer la valeur de la variable s après chacune des séquences d'instructions suivantes : (si erreur, indiquez la)

    string s = string("A") + "BC";
string s = string("AB") + 'C';
string s = "A" + "BC";
string s = "AB";
s += 'C';
string s = "AB";
string ss = s + 5;
string s = "PRG";
string s1 = "2023-01-01";
s += s1[4];
s += s1[6];
string s = "PRG";
s += to_string(1);
----------------------------------
Pointeurs
Coder en C++ les questions suivantes.

NB : les instructions sont dépendantes les unes des autres
NB : les instructions sont dépendantes les unes des autres

Créer une variable var1 initialisée 1
Réponse
Créer une variable var2 initialisée 2
Réponse
Créer une constante cste initialisée 3
Réponse
Créer un pointeur non constant ptr1 non initialisé
Réponse
Créer un pointeur non constant ptr2 pointant sur var2
Réponse
Faire pointer ptr1 sur var1
Réponse
Modifier la valeur pointée par ptr1 à 2
Réponse
Afficher "oui" ou "non" selon si ptr1 et ptr2 pointent sur la même variable.
Ne pas utiliser de if
Réponse
Afficher "oui" ou "non" selon si ptr1 et ptr2 pointent sur une valeur identique.
Ne pas utiliser de if
Réponse
Afficher l'addresse où se trouve var1
Réponse
Afficher le contenu de ptr1
Que peut-on dire de cette valeur ?
Réponse
Afficher l'addresse où se trouve ptr1
Réponse
Faire pointer ptr1 sur cste
Réponse
Déclarer un pointer non constant ptr3 sur cste
Réponse

---------------------------
Priorité des opérateurs
Ajouter toutes les parenthèses aux expressions suivantes pour exprimer explicitement l'ordre d'évaluation de l'expression qui existe implicitement en vertu de l'ordre de priorité des opérateurs.

Par exemple, l'expression
a + b * c;
doit être ré-écrite

(a + (b * c));
puisque la multiplication est prioritaire sur l'addition. De même, l'expression

a / b * c;
doit être ré-écrite

((a / b) * c);
Les opérateurs / et * de même priorité étant évalués de gauche à droite.
1 * 2 + 3 / 4 * 2
a + b < c * d + e or f - g + h == i
a == b < c
a < b or c == d and e > b
++++a;
+ a - - b * - c + - + d
a * b % c + d % e / f - g
+ a - b or c == d > e < f and g

--------------------
03 - Structures de Controle
/01-03 - opérateur ternaire (2).md
?: -> if ... else
    Réécrivez les extraits de code suivants en n'utilisant pas d'opérateur ternaire mais uniquement if ... else

        a = a >= 1 ? 42 : a * a;
b = a == 2 ? 32 : ( a < 5 ? 12 : 23 );
c = a < 0 ? ( b < 0 ? a : -a ) : ( b < 5 ? a + b : a - b );

------------------------------
while (2)
    Que va afficher à l'exécution chacun des groupes d'instructions ci-dessous ?

    // 1
    int i = 0;
while (i <= 5)
    i++;
cout << i;


// 2
int i = 0, j = 0;
while (i <= 5)
    i += j++;
cout << i << ' ' << j;
// 3
int i = 0, j = 0;
while (i <= 5)
    i += ++j;
cout << i << ' ' << j;
// 4
int i = 0, j = 0;
while (j <= 5)
    i += j++;
cout << i << ' ' << j;
//5
int i = 0, j = 0;
while (j <= 5)
    i += ++j;
cout << i << ' ' << j;

// 6
int i = 0, j = 0;
while (i <= 5) i += 2; j++;
cout << i << ' ' << j;
---------------------------
boucles imbriquées
Que va afficher à l'exécution chacun des groupes d'instructions ci-dessous ?
    // 1
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 4; ++j) {
            cout << "*";
        }
        cout << endl;
    }

// 2
for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 3; ++j) {
        cout << "*";
    }
    cout << endl;
}

// 3
for (int i = 1; i <= 4; ++i) {
    for (int j = 1; j <= i; ++j) {
        cout << "*";
    }
    cout << endl;
}

// 4
for (int i = 1; i <= 3; ++i) {
    for (int j = 1; j <= 5; ++j) {
        if (j % 2 == 0) {
            cout << "o";
        } else {
            cout << "x";
        }
    }
    cout << endl;
}
---------------

continue et break dans boucle do… while

#include <iostream>
using namespace std;

int main() {
    int n = 0;

    do {
        if (n % 2 == 0) {
            cout << n << "/2 ";
            n += 3;
            continue;
        }
        if (n % 3 == 0) {
            cout << n << "/3 ";
            n += 5;
        }
        if (n % 5 == 0) {
            cout << n << "/5 ";
            break;
        }
        ++n;
    } while (true);
}

----------------------------

continue et break dans boucle do… while
Qu'affiche le programme suivant ?
#include <iostream>
using namespace std;

int main() {

    int n = 0;

    while (n < 5) {
        ++n;
        switch(n) {
            case 1 : cout << "1";
            case 2 : cout << "2"; break;
            case 3 : cout << "3";
            case 4 : cout << "4 "; continue;
            default : cout << "D";
        }
        cout << "N ";
    }
}
Conseil : essayer de trouver la réponse "à la main", puis vérifier votre réponse en l'exécutant pas à pas dans un debugger.
-------------
 */

#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    std::cout << "Başlangıç kapasitesi: " << v.capacity() << std::endl;

    v.push_back(1);
    std::cout << "1. push_back sonrası kapasite: " << v.capacity() << std::endl;

    v.push_back(2);
    std::cout << "2. push_back sonrası kapasite: " << v.capacity() << std::endl;

    v.push_back(3);
    std::cout << "3. push_back sonrası kapasite: " << v.capacity() << std::endl;
    v.push_back(3);
    std::cout << "4. push_back sonrası kapasite: " << v.capacity() << std::endl;
    v.push_back(3);
    std::cout << "5. push_back sonrası kapasite: " << v.capacity() << std::endl;
    v.resize(100);
    std::cout << "resize(100) sonrası kapasite: " << v.capacity() << std::endl;

    return 0;
}