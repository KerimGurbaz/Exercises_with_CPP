//
// Created by Krm on 16/12/2024.
//
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle() : length(1.0), width(1.0) {
        cout<<"defauld constructor called. Lenght and width initialized 1.0 "<<endl;
    }

    Rectangle(double l, double w): length(l), width(w) {
        cout << "Parameterized constructor called. Length = " << length << ", Width = " << width << "." << endl;
    }

    //Setter for length
    void setLength(double l) {
        if(l >0) {
            length = l;
            cout<<"Legth set to "<< length<<endl;
        }else {
            cout<<"Error : Length must be positive." <<endl;
        }
    }

    // Setter for width
    void setWidth(double w) {
        if(w > 0) {
            width = w;
            cout<<"Width set to " << width<<endl;
        }else {
            cout<<"Erreur : width must be positive"<<endl;
        }
    }

    double getLength() const {
        return length;
    }

    double getWiidth() const {
        return width;
    }

    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2*(length + width);
    }
};

int main() {
    Rectangle rect1;
    cout<<"Area of rect1 : "<< rect1.area()<<endl;
    cout<<"Perimeter of rec1 : "<< rect1.perimeter()<< endl;

    cout<<"---------------------------------------------"<<endl;

    Rectangle rect2(5.0, 3.0);
    cout<<"Area of rect2: "<<rect2.area()<<endl;
    cout<<"Perimetre of rec2 "<< rect2.perimeter()<<endl;

    cout<<"---------------------------------------------"<<endl;

    // Modifying the dimentions of rec1 using setters

    rect1.setLength(4.5);
    rect1.setWidth(2.5);
    cout<<"Updated Area of rec1" << rect1.area()<<endl;

    // Attempting to set invalid dimensions
    rect1.setLength(-3.0);// should trigger an error
    rect1.setWidth(-4); // should trigger an error
    return 0;
}