//
// Created by Krm on 02/01/2025.
//

#include <iostream>
using namespace std;

//Definition de la classe robot
class Robot {
private:
    int position;
    bool direction;

public:
    //Constructeur par defaut : position = 0; direction =droite;
    Robot() : position(0), direction(true){}

    //Constructeur parametre: definit la position initiale, et direction =droite
    Robot(int pos_initiale) : position(pos_initiale), direction(true){}

    //Methode pour deplacer le robot de n unites dans la direction courante

};