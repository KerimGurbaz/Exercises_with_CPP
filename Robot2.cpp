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
void deplacer(int n = 1) {
        if(n <= 0) {
            //Ne pas deplacer si n<=0;
            return;
        }
        if(direction) {
            //Deplacement vers la droite
            position += n;
        }else {
            //Déplacement vers la gauche
            position -=n;
        }

    }

    //Méthode pour faire demi-tour(inverser la direction)
    void faireDemiTour() {
        direction =!direction;
    }

    //Méthode pour obtenir la position actuelle du robot
    int getPosition() const {
        return position;
    }
};

int main() {
    Robot r1; //Position initale par defaut(0)
    Robot r2(10) ; //Position initiale à 10

    //Affichage de la position de r2;
    cout<<"position courante de r2 : "<<r2.getPosition()<<endl;

    // deplacement de r1 par defaut(1 unité vers la droite)
    cout<<r1.getPosition()<<endl;
    r1.deplacer();
    cout<<"positin courante de r1; "<<r1.getPosition()<<endl;

    // Tentative de déplacement de r1 avec n = -1 (ne devrait pas bouger)
    r1.deplacer(-1);
    cout << "position courante de r1: " << r1.getPosition() << endl;

    // Déplacement de r1 de 2 unités vers la droite
    r1.deplacer(2);
    cout << "position courante de r1: " << r1.getPosition() << endl;

    // Faire demi-tour pour r1 (maintenant direction gauche)
    r1.faireDemiTour();
    // Déplacement de r1 de 4 unités vers la gauche
    r1.deplacer(4);
    cout << "position courante de r1: " << r1.getPosition() << endl;
}

