//
// Created by Krm on 17/12/2024.
//
#include <iostream>
#include <string>
#include <iomanip>
#include <xmmintrin.h>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    //Constructeur par defaut
    BankAccount() : accountNumber("Inconnu"), balance(0.0) {
        cout<<"Constructeur par defaut appele. Numero de compte: "
        <<accountNumber << ", Solde: $"
        <<fixed<<setprecision(2)<<balance<<endl;
    }

    //Constructeur paramétre
    BankAccount(string accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {
        cout<<"Constructeur parametre appele numero de compte : "
        <<accountNumber<<", Solde : $"
        <<fixed<<setprecision(2)<<balance<<endl;
    }

    // Setter pour le numero de compte
    void setAccountNumber(string accNum) {
        accountNumber = accNum;
        cout<<"Numero de compte mis a jour a : "<<accountNumber<<endl;
    }

    //getter ppour le numero de compte
    string getAccount1number() const {
        return accountNumber;
    }

    //Setter pour le solde(peut etre utilise pour initialiser ou reinitialiser)
    void setBalance(double newBalance) {
        if(newBalance >= 0) {
            balance = newBalance;
            cout<<"Solde mis a jour à : $"
            <<fixed<<setprecision(2)<<balance<<endl;
        }else {
            cout<<"Erreur: Le solde ne peut pas etre negatif. "<<endl;
        }
    }

    //getter pour le solde
    double getBalance() const {
        return balance;
    }

    //Fonction membre pour déposer de l'argent
    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout<<"Depot de $"<<fixed<<setprecision(2)<<amount<<"affectue. Nouveau solde $"<<balance<<endl;

        }else {
            cout<<"erreur : le montant du deppot doit etre positif."<< endl;
        }
    }

    //Fonction membre pour retire de l'argent
    void withdraw(double amount) {
        if(amount < 0) {
            cout<<"Erreur :Le montant du retrait doit etre positif"<<endl;
        }else if(amount > balance) {
            cout<<"erreur: Solde insuffusant pour retirer $"
            <<fixed<<setprecision(2)<<amount<<endl;
        }else {
            balance -= amount;
            cout<<"Retrait de $"<< fixed<<setprecision(2)<<amount
            <<"effectue. Nouveau solde "
            <<balance<<endl;
        }
    }

    //fonction pour afficher les informations du compte
    void displayInfo() const {
        cout<<"informations du compte bancaire: "<<endl;
        cout<<"Numero de compte : "<<accountNumber<<endl;
        cout<<"Solde $"<< fixed<<setprecision(2)<<balance<<endl;
    }
};

int main() {
    // creation d'un objet BankAccount
    cout<<"Creation de compte1 avec constructeur par defaut"<<endl;
    BankAccount compte1;
    compte1.displayInfo();

    //Modification des attributs de compte1
    cout<<"Mise a jour des informations de compte1"<<endl;
    compte1.setAccountNumber("ACC123456");
    compte1.setBalance(500.0);
    compte1.displayInfo();

    cout << "-------------------------------------------" << endl;

    // Dépôt et retrait d'argent sur compte1

    cout << "Effectuer un dépôt de $150.75 sur compte1:" << endl;
    compte1.deposit(150.75);
    compte1.displayInfo();
    cout << "Effectuer un retrait de $100.50 sur compte1:" << endl;
    compte1.withdraw(100.50);
    compte1.displayInfo();

    cout << "Effectuer un retrait de $600.00 sur compte1 (solde insuffisant):" << endl;
    compte1.withdraw(600.00); // Devrait afficher une erreur

    cout << "-------------------------------------------" << endl;

    // Création d'un objet BankAccount en utilisant le constructeur paramétré
    cout << "Création de compte2 avec le constructeur paramétré:" << endl;
    BankAccount compte2("ACC654321", 1000.0);
    compte2.displayInfo();

    cout << "-------------------------------------------" << endl;

    // Dépôt et retrait d'argent sur compte2
    cout << "Effectuer un dépôt de $300.00 sur compte2:" << endl;
    compte2.deposit(300.00);
    compte2.displayInfo();

    cout << "Effectuer un retrait de $50.00 sur compte2:" << endl;
    compte2.withdraw(50.00);
    compte2.displayInfo();


    return 0;
}

