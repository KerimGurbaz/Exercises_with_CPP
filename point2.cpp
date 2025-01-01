//
// Created by Krm on 01/01/2025.
//

#include <iostream>
using namespace std;

class Point {
private:
    double x ;
    double y;
    double xMax;
    double yMax;



    public:
    Point() : x(0.0), y(0.0),xMax(100.0), yMax(100.0){}

    //Constructeur avec parametre:
    Point(double x_val, double y_val, double x_Max=100.0, double y_Max= 100.0):x(x_val), y(y_val), xMax(x_Max), yMax(y_Max) {
        if(x < 0) x =0;
        if(x > xMax) x = xMax;
        if(y < 0) y =0;
        if(y > yMax) y = yMax;
    }

    void setX(double x_val) {
        if(x_val >=0 && x_val <=xMax) {
            x = x_val;
        }
    }

    void setY(double y_val) {
        if(y >=0 && y<=yMax) {
            y = y_val;
        }
    }

    double getX()const {
        return x;
    }
    double getY()const {
        return y;
    }

    void afficher()const {
        cout<<"x = "<<x<<" , y= "<<y<<endl;
    }

    void deplacer(double dx, double dy) {
        if(x + dx >=0 && x+dx<=xMax) {
            x += dx;
        }if(y + dy >=0 && y+dy<=yMax) {
            y += dy;
        }

    }
};

int main() {
    Point p1(1.2, 2.4);
    cout << "p1"; p1.afficher();
    p1.deplacer(1., 3.);
    cout << "p1"; p1.afficher();
    p1.setX(4.);
    cout << "p1"; p1.afficher();
    p1.setY(7.);
    cout << "p1"; p1.afficher();

    Point p2(3., 4.2, 10., 10.);
    cout << "p2"; p2.afficher();
    p2.deplacer(15, 2);
    cout << "p2"; p2.afficher();
    p2.deplacer(3, 2);
    cout << "p2"; p2.afficher();
    p2.setX(-3);
    cout << "p2"; p2.afficher();
    p2.setY(12);
    cout << "p2"; p2.afficher();

    return 0;
}



/*
*#include <iostream>
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