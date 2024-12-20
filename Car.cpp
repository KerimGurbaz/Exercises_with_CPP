//
// Created by Krm on 20/12/2024.
//

#include "Car.h"
#include <iostream>
using namespace  std;

// Constructeur par défaut
Car::Car() : company(""), model(""), year(0) {}

//Constructeur avec parametres
Car :: Car(const string & company, const string& model, int year) : company(company), model(model), year(year){}

//Setters
void Car::setCompany(const string &company) {
    this->company = company;
}

void Car::setModel(const string &model) {
    this->model =model;
}

void Car::setYear(int year) {
    if(year >1885) {
        this -> year =year;
    }else {
        cout<<"Anne invalide. l'annee doit etre superieur à 1885." <<endl;
    }
}

//Getters
string Car::getCompany() const {
    return company;
}

string Car::getModel() const {
    return model;
}
int Car::getYear() const {
    return year;
}

void Car::displayInfo() const {
    cout<<"Societe : "<<company
    <<", Modele : "<< model
    <<", Anne : "<< year<<endl;
}



int main() {

    Car car1;

    car1.setCompany("Toyota");
    car1.setModel("Coralla");
    car1.setYear(2020);


    cout<<"Modele"<<car1.getCompany()<<endl;

    return 0;
}


