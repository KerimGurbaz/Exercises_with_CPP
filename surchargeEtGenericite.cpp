#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    //Constructor
    Employee(string empName, int empID, double empSalary) {
        name = empName;
        employeeID = empID;
        salary = empSalary;
    }

    //Setter name
    void setName(string empName) {
        name = empName;
    }
    // getter name
    string getName ()const {
        return name;
    }

    //Setter ID
    void setEmployeeID(int empID) {
       employeeID = empID;
    }

    //Getter employeeID
    int getEmployeeID() {
        return employeeID;
    }

    //Setter employee salary
    void setEmployeeSalary( double empSalary) {
        salary = empSalary;
    }
    // getSalaray
    double getSalary() const {
        return salary;
    }


    //Fonction qui calcule le salary en fonction des performances.
    void calculateSalary(char performanceRating) {
        // Note de performance : « A » (Excellent), « B » (Bon), « C » (Passable), « D » (Mauvais)
    switch(performanceRating) {
        case 'A' :
            case 'a':
        salary *=1.10 ; // augmentation de 10 %
        cout<<"La note performance est A. votre salaire a été augmenté 10 %"<<endl;
        break;

        case 'B':
            case 'b':
        salary *= 1.05;
        cout<<"La note performance est B. votre salaire a été augmenté 5 %"<<endl;
        break;

        case 'C':
            case 'c':
        //La salaire ne change pas pour une performance moyenne

      cout<<"cote de performance C. Aucun changement de salaire."<<endl;
        break;

        case 'D':
            case 'd':
        salary *= 0.95; // 5 % de réduction de salaire
        cout<<"Cote de performance D. Déduction de 5 % sur votre salaire "<<endl;
        break;
        default:
            cout<<"evaluaiton des performances invalide. il n'y a eu changement dans votre salaire.";

    }
    }

    //Fonction qui imprime les informations sur les émployes à l'écran
    void displayEmployeeInfo() const {
        cout<<"Nom de l'employé: "<<name;
        cout<<"Id d'employé : "<<employeeID<<endl;
        cout<<"Salaire : "<<salary<<endl;
    }

};

int main() {
    // Employee sınıfından bir nesne oluşturuyoruz
    Employee emp1("Ahmet Yılmaz", 1001, 5000.0);

    // Nous consultons les informations sur les employés
    cout << "Statut Initial:" << endl;
    emp1.displayEmployeeInfo();
    cout << endl;

    // Nous évaluons avec une note de performance de A
    emp1.calculateSalary('A');
    cout << "Statut mis à jour :" << endl;

    emp1.displayEmployeeInfo();
    cout << endl;

    // Nous expérimentons un autre degré de performance
    emp1.calculateSalary('B');
    cout << "Statut mis à jour:" << endl;
    emp1.displayEmployeeInfo();
    cout << endl;

    // Nous testons une note de performance invalide
    emp1.calculateSalary('E');
    cout << "statut mis à jour" << endl;
    emp1.displayEmployeeInfo();
    cout << endl;

    return 0;
}







/*
 * class Employee {
private:
    std::string name;
    int employeeID;
    double salary;

public:
    // Constructor
    Employee(std::string name, int employeeID) : name(name), employeeID(employeeID), salary(0.0) {}

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getEmployeeID() const {
        return employeeID;
    }

    double getSalary() const {
        return salary;
    }

    // Function to set salary based on performance
    void setSalary(double baseSalary, double performanceScore) {
        // Basic input validation
        if (baseSalary < 0) {
            std::cerr << "Error: Base salary cannot be negative. Setting to 0." << std::endl;
            baseSalary = 0;
        }
        if (performanceScore < 0) {
            std::cerr << "Warning: Performance score cannot be negative. Using 0." << std::endl;
            performanceScore = 0;
        }
        else if (performanceScore > 100){
            std::cerr << "Warning: Performance score should be between 0-100. Using 100." << std::endl;
            performanceScore = 100;
        }

        // Calculate salary with performance bonus (up to 20% bonus)
        salary = baseSalary * (1 + (performanceScore / 100) * 0.20);
    }

    // Function to display employee information
    void displayInfo() const {
    cout << "Name: " << name << endl;
    cout << "Employee ID: " << employeeID <<endl;
    cout << "Salary: $" << salary << endl;
    }
};

int main() {
    // Create an Employee object
    Employee emp1("John Doe", 12345);

    // Set the salary based on performance
    emp1.setSalary(50000, 90); // Base salary $50,000, performance score 90

    // Display employee information
    emp1.displayInfo();

    std::cout << "\n--------------------\n";

    Employee emp2("Jane Smith", 456);
    emp2.setSalary(60000, 75);
    emp2.displayInfo();

    std::cout << "\n--------------------\n";

    Employee emp3("Invalid Employee", -555);
    emp3.setSalary(-60000, -5); //test invalid input for setSalary
    emp3.displayInfo();

    std::cout << "\n--------------------\n";
    Employee emp4("Valid Employee", 555);
    emp4.setSalary(60000, 105); //test invalid input for setSalary
    emp4.displayInfo();
    return 0;
}
 */

