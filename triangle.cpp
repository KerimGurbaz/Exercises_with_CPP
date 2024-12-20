//
// Created by Krm on 20/12/2024.
//
#include <iostream>
#include <stdexcept>
using namespace std;

class Triangle {
private:
    double side1;
    double side2;
    double side3;

    bool isValidTriangle()const {
        // Triangle Inequality Theorem:
        // The sum of any two sides must be greater than the third side
        return (side1 + side2 > side3) &&
            (side1 + side3 > side2)&&
                (side2 + side3 >side1);
    }

public:
    // default constructeur
    Triangle(): side1(1.0), side2(1.0), side3(1.0){}

    Triangle(double s1, double s2, double s3): side1(s1), side2(s2), side3(s3) {
        if(!isValidTriangle()) {
            throw invalid_argument("invalid side lengths for a triangle");
        }
    }

    void setSide1(double s1) {
        side1 =s1;
        if (!isValidTriangle()) {
            throw invalid_argument("Invalid side lengths after setting side1.");
        }
    }

    void setSide2(double s2) {
        side2 =s2;
        if (!isValidTriangle()) {
            throw invalid_argument("Invalid side lengths after setting side2.");
        }
    }

    void setSide3(double s3) {
        side3 =s3;
        if (!isValidTriangle()) {
            throw invalid_argument("Invalid side lengths after setting side3.");
        }
    }

    //Getters
    double getSide1() const {return side1;}
    double getside2() const {return side2;}
    double getside3()const {return  side3;}

    //Function to check if the triangle is equilateral
    bool isEquilateral() const {
        return (side1 == side2) && (side2 == side3);
    }

    bool isIsosceles() const {
        return (side1 == side2)||(side1 ==side3)|| (side2 == side3);
    }

    // Function to check if the triangle is scalene
    bool isScalene() const {
        return (side1 != side2) && (side1 != side3) && (side2 != side3);
    }

    // Function to display the triangle's sides
    void displaySides() const {
        cout << "Triangle sides: " << side1 << ", " << side2 << ", " << side3 << endl;
    }


};

int main() {

    try {
        //Creating an equilaterale
        Triangle t1(5.0, 5.0, 5.0);
        cout<<"Triangle t1 : "<< endl;
        t1.displaySides();
        if(t1.isEquilateral()) {
       cout << "t1 is an Equilateral Triangle." << endl;
        }
        if (t1.isIsosceles()) {
            cout << "t1 is also an Isosceles Triangle." << endl;
        }
        if (t1.isScalene()) {
            cout << "t1 is a Scalene Triangle." << endl;
        }
        cout << endl;

        // Creating an isosceles triangle
        Triangle t2(5.0, 5.0, 3.0);
        cout << "Triangle t2:" << endl;
        t2.displaySides();
        if (t2.isEquilateral()) {
            cout << "t2 is an Equilateral Triangle." << endl;
        }
        if (t2.isIsosceles()) {
            cout << "t2 is an Isosceles Triangle." << endl;
        }
        if (t2.isScalene()) {
            cout << "t2 is a Scalene Triangle." << endl;
        }
        cout << endl;

        // Creating a scalene triangle
        Triangle t3(4.0, 5.0, 6.0);
        cout << "Triangle t3:" << endl;
        t3.displaySides();
        if (t3.isEquilateral()) {
            cout << "t3 is an Equilateral Triangle." << endl;
        }
        if (t3.isIsosceles()) {
            cout << "t3 is an Isosceles Triangle." << endl;
        }
        if (t3.isScalene()) {
            cout << "t3 is a Scalene Triangle." << endl;
        }
        cout << endl;

        // Attempting to create an invalid triangle
        Triangle t4(1.0, 2.0, 3.5); // This should throw an exception
    }
    catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}