//
// Created by Krm on 15/12/2024.
//

/*
* class Robot{

private:
int position;
int direction; // 1 pour droite, -1 pour gauche

public:
// constructeur avec paramètre, valeur par défaut = 0
Robot(int pos=0) : position(pos), direction(1){}

//Méthode pour deplacer le robot;
void deplacer (int n =1){
    if(n > 0){
    position += direction * n;
    }
    // si n <= 0 , ne rien faire
}

// Méthode pour faire demi-tour
void faireDemiTour(){
    direction *= -1;
}

// Méthode pour obtenir la position actuelle
int getPosition() const{
return position;
}
};

int main(){
Robot r1, r2(10);
cout<<"Position courante de r2: "<<r2.getPosition()<<endl;
    cout<<"postion courante de r1 initiale: "<<r1.getPosition()<<endl;


    r1.deplacer();
    cout<<"postion courante de r1: " <<r1.getPosition()<<endl;

    r1.deplacer(-1);
    cout<<"postion courante de r1: " <<r1.getPosition()<<endl;

    r1.deplacer(2);
    cout<<"position courante de r1 : "<<r1.getPosition()<<endl;


    r1.faireDemiTour();
    cout<<"position courante de r1 : "<<r1.getPosition()<<endl;
    r1.deplacer(4);
    cout << "position courante de r1: " << r1.getPosition() << endl;
return 0;
}
 */




#include <iostream>
#include <string>
using namespace std;

class Robot {
private:
    int position;
    int direction;

public:
    //constructeur avec paramètres pour position et direction, valeurs par défaut
    Robot(int pos =0, int dir =1) : position(pos), direction(dir){}

    //Méthode pour déplacer le robot
    void deplacer(int n =1) {
        if(n>0) {
            position += direction *n;
        }
        //si n<=0 , ne rien fait
    }

    // Méthode pour faire demi-tour
    void faireDemiTour() {
        direction *= -1;
    }

    //Méthode pour obtenir la position actuelle
    int get_position() const {
        return position;
    }

    // Méthode pour obtenir la direction actuelle
    string getdirection() const {
        return (direction ==1) ?"DROITE" : "GAUCHE";
    }};

int main() {
    int pos =0;
    string dirInput;
    int dir =1;

    // Saisie de la position initiale par l'utilisateur
    cout<<"Entrez la position initiale du robot(appuyet sur Entree pour 0 par défaut): ";
    string posStr;
    getline(cin, posStr);

    if (!posStr.emty()) {
        try {
            pos = stoi(posStr);
        }catch (invalid_argument&) {
            cout << "Entrée invalide pour la position. Utilisation de la valeur par défaut (0).\n";
            pos =0;
        }
    }
    // Saisie de la direction initiale par l'utilisateur
    cout << "Entrez la direction initiale du robot (droite/gauche, droite par défaut) : ";
    getline(cin, dirInput);

    if(!dirInput.empty()) {
        if(dirInput =="gauche" || dirInput == "Gauche") {
            dir =-1;
        }else if(dirInput =="droite" || dirInput == "Droite") {
            dir =1;
        }else {
            cout << "Direction invalide. Utilisation de la direction par défaut (Droite).\n";
            dir = 1;
        }
    }

    // Création du robot avec les valeurs saisies ou par défaut
    Robot r1(pos, dir);

    // Affichage de la position et de la direction initiales
    cout << "Position initiale de r1 : " << r1.getPosition() << endl;
    cout << "Direction initiale de r1 : " << r1.getDirection() << endl;

    // Exemple de déplacements
    r1.deplacer(); // Déplacement par défaut (1 unité)
    cout << "Après déplacement par défaut, position de r1 : " << r1.getPosition() << endl;

    r1.deplacer(-1); // Tentative de déplacement avec n <= 0 (ne bouge pas)
    cout << "Après déplacement de -1, position de r1 : " << r1.getPosition() << endl;

    r1.deplacer(2); // Déplacement de 2 unités
    cout << "Après déplacement de 2, position de r1 : " << r1.getPosition() << endl;

    r1.faireDemiTour(); // Changement de direction
    r1.deplacer(4); // Déplacement de 4 unités dans la nouvelle direction
    cout << "Après demi-tour et déplacement de 4, position de r1 : " << r1.getPosition() << endl;



    return 0;
}