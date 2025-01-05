//
// Created by Krm on 02/01/2025.
//
#include <iostream>
using namespace std;
#include <vector>

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> v3(v.rbegin() + 2, v.rend() +1);

    for(size_t i = 0; i<v3.size(); ++i) {
        cout<<v3[i]<<" ";
    }



    return 0;
}


/*
 *
 *using namespace std;
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

Point::Point() : x(0.0), y(0.0), xMax(100.0), yMax(100.0) :
x(x_val), y(y_val), xMax(x_max), yMax(y_max) {
    if(x<0) x =0;
    if(x>xMax) x = xMax;
    if(y<0) y = 0;
    if(y > yMax) y = yMax;
}

void Point:: setY(double y_val) {
    if(y_val >=  0 && y_val <=yMax) {
        y=y_val;
    }
}

void Point::setY(double y_val) {
    if(y_val >=0 && y_val <=yMax) {
        y = y_val;
    }
}

double Point:: getX()const {
    return x;
}
double Point::getY() const{
    return y;
}

void Point::deplacer(double dx, double dy) {
    if(x + dx >= 0 && x+dx <=xMax) {
        x +=dx;
    }
    if(y + dy >= 0 && y + dy <=yMax) {
        y += dy;
    }
}

void Point::afficher()const {
    cout<<"("<<x<<","<<y<<"), contraintes: [0, "<<xMax<<"]x[0,"<<yMax<<"]"<<endl;
}
Point Point::operator*(double scalar) const {
    double new_x = x * scalar;
    double new_y = y * scalar;
    //Sınır kontrolü
    if(new_x < 0) new_x = 0;
    if(new_x > xMax) new_x = xMax;
    if(new_y < 0) new_y = 0;
    if(new_y > yMax) new_y = yMax;
    return Point(new_x, new_y, xMax, yMax);
}

Point Point::operator*(double scalar) const {
    double new_x = x * scalar;
    double new_y = y * scalar;
    //Sınır kontrolü
    if(new_x < 0) new_x = 0;
    if(new_x > xMax) new_x = xMax;
    if(new_y < 0) new_y = 0;
    if(new_y > yMax) new_y = yMax;
    return Point(new_x, new_y, xMax, yMax);
}

bool Point::operator==(const Point& other) const {
    return x == other.x && y == other.y;
}

// Operatör aşırı yüklemeleri (friend fonksiyonlar)
ostream& operator<<(ostream& os, const Point& p) {
    os << "(" << p.x << "," << p.y << ")";
    return os;
}
Point operator*(double scalar, const Point& p) {
    double new_x = scalar * p.x;
    double new_y = scalar * p.y;
    //Sınır kontrolü
    if(new_x < 0) new_x = 0;
    if(new_x > p.xMax) new_x = p.xMax;
    if(new_y < 0) new_y = 0;
    if(new_y > p.yMax) new_y = p.yMax;
    return Point(new_x, new_y, p.xMax, p.yMax);
}

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