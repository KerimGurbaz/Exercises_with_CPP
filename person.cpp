//
// Created by Krm on 20/12/2024.
//
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

//Declaration de classe person
class Person {
private:
    string name;
    int age;
    string country;


public:
    Person(): name("kerim"), age(37), country("Turquie"){}

    //Constructeur avec parametres
    Person( const string& name, int age, const string & country)
    : name(name), age(age), country(country){}

    //Setter pour le nom
    void setName(const string& newName) {
        name = newName;
    }
    string getName()const {
        return name;
    }

    //Setter pour le nom
    void setAge(int newAge) {
        if(newAge >= 0) {
            age = newAge;
        }else {
            cout<<"Age invalide"<<endl;
        }
    }

    int getAge()const {
        return age;
    }

    //Setter pour le pays
    void setCountry(const string& newCountry) {
        country = newCountry;
    }

    string getCountry()const {
        return country;
    }

    //Fonction pour afficher les informations de la personne
    void displayInfo()const {
        cout<<"Nom:"<<name
        <<"\nAge: "<<age
        <<"\nPays : "<<country<<endl;
    }


};

int main() {

    Person person1;
    person1.displayInfo();

    person1.setCountry("Suisse");
    person1.displayInfo();
    cout<<person1.getCountry();

    //Creation d'une autre instance
    Person person2("Bob", 25, "France");
    cout << "\nInformations de person2:" << endl;
    person2.displayInfo();


    return 0;
}