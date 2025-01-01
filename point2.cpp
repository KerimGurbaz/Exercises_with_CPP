//
// Created by Krm on 01/01/2025.
//
#include <iostream>
using namespace std;


class Point {
private:
    double x;
    double y;

public:
    Point():x(0.0), y(0.0){}
    Point(double x_val, double y_val) : x(x_val), y(y_val){}

    void setX(double x_val) {
        x = x_val;
    }

    void setY(double y_val) {
        y = y_val;
    }

    double  getX() const{
        return x;
    }
    double  getY() const{
        return y;
    }

    void afficher() {
        cout<<x<<" -- "<<y<<endl;
    }

    void deplacer(double dx, double dy) {
        x += dx;
        y += dy;
    }
};

int main() {
    Point centre;
    centre.afficher();

    Point p(3.5, 2.4);
    p.afficher();

    centre.deplacer(3,5);
    centre.afficher();

    cout<<centre.getX()<<endl;
    cout<<p.getX()<<endl;




    return 0;
}



/*
 *
*class Point {
private:
    double x;
    double y;

public:
    Point() : x(0.0), y(0.0){}
    void setX(double x_val) {
        x = x_val;
    }

    void setY(double y_val) {
        y = y_val;
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    void afficher() const{
        cout<<"("<<x<<","<<y<<")"<<endl;
    }

    void deplacer(double dx, double dy) {
        x += dx;
        y += dy;
    }

};

int main() {
    Point centre;
    centre.setX(0);
    centre.setY(0);
    centre.afficher();

    Point p;
    p.setX(1.2);
    p.setY(2.4);
    p.afficher();

    p.deplacer(0.8, 0.6);
    p.afficher();

    p.setX(5.5);
    p.setY(10.3);

    cout<<p.getX()<<" -- "<<p.getY()<<endl;


    return 0;
}
* struct Point {
private:

public:
    double x;
    double y;

    Point() : x(0.0), y(0.0) {

    }

    Point(double x_val, double y_val) : x(x_val), y(y_val) {
        //
    }

    void afficher() {
        cout<<"("<<x<<", "<<y<<")"<<endl;
    }

    void deplacer(double dx, double dy) {
        x += dx;

        y += dy;
    }

};


int main() {
    Point centre{};
    centre.afficher();

    Point p{1.2, 2.4};
    p.afficher();

    p.deplacer(0.8, 0.6);
    p.afficher();


    p.x = 5.5;
    p.y = 10.3;
    p.afficher();
    cout << p.x << " -- " << p.y << endl;



    return 0;
}

 */