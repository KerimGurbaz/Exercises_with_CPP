//
// Created by Krm on 17/12/2024.
//

/*
 * #include <iostream>
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

 */

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string marque, model;
    int anne;


public:
    //constructeur par defaut
    Car(): marque("inconnu"), model("inconnu"), anne(0) {
        cout<<"constructeur par defeut, marque: "
        <<marque<<", model: "
        <<model<<", anne: "
        <<anne<<endl;
    }

    //constructeur par parametre

    Car(string mar, string mod, int a ): marque(mar),model(mod), anne(a) {
        cout<<"constructeur par parametre, marque: "
        <<marque<<", model: "
        <<model<<", anne: "
        <<anne<<endl;
    }

    void setMarque(string mar) {
        marque=mar;
        cout<<"marque mis a jour à"<< marque<<endl;
    }

    string getMarque() const {
        return marque;
    }

    void setModel(string mod) {
        model =mod;
        cout<<"Model mis a jour à"<< model<<endl;
    }

    string getModel()const {
        return model;
    }

    void setAge( int a) {
        anne =a;
        cout<<"anne mis a jour à "<<anne<<endl;
    }

    int getAnne()const {
        return anne;
    }

    void displayInfo() const {
        cout<<"l'information de car:\n marque : "
        <<marque<<"\nmodel : "<<model
        <<"\n year : "<<anne<<endl;
    }
    //friend ostream& operator<<(ostream& os, const Car& car);


};

//Surrcharge de l'operateur <<pour afficher les informations d'une car
ostream& operator<<(ostream& os, const Car& car) {
    os<<car.getMarque()
    <<car.getModel()
    <<car.getAnne();
    return os;
}
int main() {
    Car car1;
    cout<<"Création de person1 avec le constructeur par défaut" <<endl;
    car1.displayInfo();

    cout<<"-------------------------------------------"<<endl;

    car1.setMarque("Toyota");
    car1.setModel("Yaris");
    car1.setAge(2008);
    car1.displayInfo();

    cout<<"-------------------------------------------"<<endl;

    Car car2;
    car2.setMarque("Hundai");
    car2.setModel("Getz");
    car2.setAge(2005);


    cout<<((car1.getAnne() < car2.getAnne()) ? "la première voiture est plus ancienne":"la deuxième voiture est plus ancienne") <<endl;

    // Utilisation de l'opérateur << pour afficher les informations des voitures
    cout << "Affichage des informations avec l'opérateur << :" << endl;
    cout << car1 << endl;
    cout << car2 << endl;

    return 0;
}




