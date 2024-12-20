//
// Created by Krm on 20/12/2024.
//

#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    //constructeur par defaut
    Car(const string &company, const string & model, int year);

    void setCompany(const string& company);
    void setModel(const string& model);
    void setYear(int year);

    //Getters
    string getCompany()const;
    string getModel() const;
    int getYear() const;

    void displayInfo() const;
};

#endif //CAR_H
