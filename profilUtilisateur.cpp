//
// Created by Krm on 17/12/2024.
//
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string nom, pays;
    int age;

public:
    //Constructeur par defaut
    Person() : nom("inconnu"), age(0), pays("inconnu") {
        cout<<"Constructeur par defaut appele. Nom: " << nom
        <<", Age : "<<age
        <<", Pays : "<<pays<<endl;
    }
     //Constructeur par paramatres
    Person(string n, int a, string p) : nom(n), age(a), pays(p) {
        cout << "Constructeur paramétré appelé. Nom: " << nom
            << ", Âge: " << age
            << ", Pays: " << pays << "." << endl;
    }

    void setName(string n) {
        nom = n;
        cout<<"nom mis à jour à "<< nom<<". "<<endl;
    }

    string getName() const {
        return nom;
    }

    void setAge(int a) {
        if(a >= 0) {
            age =a;
            cout<<"Age mis a jour à :"<<age<<endl;
        }else {
            cout<<"L'age ne peut pas etre negatif. "<<endl;
        }
    }
    //Setter pour le pays
    void setPays (string p) {
        pays = p;
        cout<<"Pays mis a jour à : "<<pays<<endl;
    }

    string getPays() const {
        return pays;
    }

    void displayInfo() const{
        cout << "Informations de la personne:" << endl;
        cout << "Nom: " << nom << endl;
        cout << "Âge: " << age << endl;
        cout << "Pays: " << pays << endl;
    }
};

int main() {
    cout<<"Création de person1 avec le constructeur par défaut" <<endl;
    Person person1;
    person1.displayInfo();
    cout<<"-------------------------------------------------------"<<endl;


    //Creation d'un objet Person
    cout << "Création de person2 avec le constructeur paramétré:" << endl;
    Person person2("Kerim", 37, "Turquie");
    person2.displayInfo();

    //Modification des attributs de person1
    cout << "Mise à jour des informations de person1:" << endl;
    person1.setName("Damla");
    person1.setAge(33);
    person1.setPays("Nestle");
    person1.displayInfo();

    cout << "----------------------------------------" << endl;
    cout << "Consultation des informations de person2:" << endl;
    cout << "Consultation des informations de person2:" << endl;
    cout << "Nom: " << person2.getName() << endl;

    cout << "Pays: " << person2.getPays() << endl;

return 0;

}




