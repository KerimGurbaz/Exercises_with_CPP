//
// Created by Krm on 17/12/2024.
//
#include <iostream>
#include <string>
#include <iomanip>
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

    int main() {



        return 0;
    }




};
