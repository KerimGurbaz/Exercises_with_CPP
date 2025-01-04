//
// Created by Krm on 02/01/2025.
//
#include <iostream>
using namespace std;
class Point {

private:
    double x;
    double y;
    const double xMax;
    const double yMax;

public:
    Point();
    Point(double x_val, double y_val, double x_max =100.0, double y_max = 100.0);

    //fonctions members
    void setX(double x_val);
    void setY(double y_val);
    double getX() const;
    double getY() const;
    void deplacer(double dx, double dy);
    void afficher() const;

    // surcharges d'operateurs()fonctions membres
    Point operator +(const Point& other) const;
    Point operator *(double scalar) const;
    bool operator ==(const Point& other) const;

    //surcharges d'operateurs(fonctions amies)
    friend ostream& operator<<(ostream& os, const Point& p);
    friend Point operator *(double scalar, const Point& p);
};





/*
* #include <iostream>
using namespace std;

class Point {
private:

    double x ;
    double y;
    const double xMax;
    const double yMax;

public:
    Point() : x(0.0), y(0.0), xMax(100.0), yMax(100.0){}

    Point(double x_val, double y_val, double x_max = 100.0, double y_max = 100.0):x(x_val), y(y_val), xMax(x_max), yMax(y_max) {
        if(x<0) x = 0;
        if(x>xMax) x = xMax;
        if(y<0) y = 0;
        if(y > yMax) y = yMax;
    }

    void setX(double x_val) {
        if(x_val >= 0 && x_val <= xMax) {
            x = x_val;
        }
    }

    void setY(double y_val) {
        if(y_val >= 0 && y_val <= yMax) {
            y = y_val;
        }
    }

    double getX() const {
        return x;
    }

    double getY()const {
        return y;
    }

    void afficher()const {
        cout << "(" << x << "," << y << "), contraintes: [0," << xMax << "]x[0," << yMax << "]" << endl;
    }

    void deplacer(double dx, double dy) {
        if(x + dx >= 0 && x +dx <=xMax) {
            x +=dx;
        }

        if(y+ dy >= 0 && y + dy <= yMax) {
            y +=dy;
        }
    }

    friend ostream& operator<<(ostream& os, const Point& p) {
        os<<"("<<p.x << ", "<<p.y<<")";
        return os;
    }

    Point operator+(const Point& other)const {
        return Point(x+ other.x, y+other.y, xMax, yMax)
    }

    Point operator*(double scalar)const {
        return Point(x * scalar, y* scalar, xMax, yMax);
    }

    friend Point operator*(double scalar, const Point& p) {

    }


};
 */