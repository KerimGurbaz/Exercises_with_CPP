//
// Created by Krm on 16/12/2024.
//

/*
#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    vector<int> scores;

public:
    void input(int numScores) {
        scores.resize(numScores);
        for(int & score: scores) {
            cin >> score;
        }
    }

    int calculateTotalScore() const {
        int total = 0;
        for(int score: scores) {
            total += score;
        }
        return total;
    }

};

int main() {
    int n, numScores;

    cin>>n ;
    numScores =5;

    vector<Student> students(n); // nous créons n onjets Student

    for(int i = 0; i < n; ++i) {
        students[i].input(numScores);
    }

    int kristenTotal = students[0].calculateTotalScore();
    int count =0;

    for(int i= 1; i< n; ++i) {
        if(students[i].calculateTotalScore() > kristenTotal) {
            count++;
        }
    }
    cout<<count;
    }
* */
#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius; // Variable membre privée pour le rayon du cercle


public:
    //constructeur par défaut
    Circle() : radius(1.0) { // initialise le rayon à 1.0 si aucun argument n'est fourni
        cout<<"Constructeur par défaut appéle. Rayon initialisé a" << radius<<"."<<endl;
    }

    //Constructeur parametre
    Circle(double r): radius(r) {
        cout<<"Constructeur paramétré applé. Rayon initialisé à "<<radius<<endl;
    }

    //Méthode pour définir le rayon(setter)
    void setRadius(double r) {
        if(r >= 0) {
            radius =r;
            cout<<"Rayon mis a jour à "<<radius<<endl;
        }else {
            cout<<"Erreur : Le rayon ne peut pas etre négatif ."<<endl;
        }
    }

    //Méthode pour obtenir le rayon(getter)
    double getRadius() const {
        return radius;
    }

    //Méthode pour calculer l'aire du cercle
    double area()const {
        return M_PI * pow(radius , 2);
    }

    // Méthode pour calculer la circonférence du cercle
    double circumference() const {
        return 2* M_PI * radius; // 2*pi*r
        }
};



int main(){
    Circle c1;
    cout<<"Aire de c1 : "<<c1.area()<<endl;
    cout<<"Circonférence de c1: "<<c1.circumference()<<endl;


    //Modification du rayon de c1

    c1.setRadius(3.5);
    cout<<"Nouvelle aire de c1 : "<<c1.area()<<endl;
    cout<<"Nouvelle circonférence de c1 "<< c1.circumference()<<endl;

    cout<<"---------------------------------"<<endl;

    c1.setRadius(-3.0);
return 0;
}







