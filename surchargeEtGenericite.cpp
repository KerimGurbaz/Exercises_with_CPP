//
// Created by Krm on 26/12/2024.
//
#include <iostream>
#include <string>
using namespace std;

class Employee{
private:
string name;
int employeeID;
double salary;

public:

//constructor
Employee(string name, int employeeID): name(name), employeeID(employeeID), salary(0.0){}

//getter fonctions
string getname()const{
return name;
}
int getEmployeeID() const{
return employeeID;
}
double getSalary() const{
return salary;
}




int main(){



return 0;
}