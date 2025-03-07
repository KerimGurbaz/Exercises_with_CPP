//
// Created by Krm on 07.03.2025.
//
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << std::endl;

    struct Coord {
        int x, y ,z;
    };

    struct Cercle {
        int rayon;
        Coord centre;
    };

    const Coord origine = {0, 0, 0};
    Cercle cercle = {1, {2,3,4}};
    Cercle *ptr = &cercle;
    cout << (*(&cercle)).rayon<<endl;;



    cout<<cercle.rayon<<endl;
    cercle.centre =origine;

    return 0;
}
