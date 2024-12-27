//
// Created by Krm on 27/12/2024.
//

#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d = 1, int m =1, int y =2000) {
        day =d;
        month = m;
        year = y;
    }

    void setDay(int d) {
        day = d;
    }
    int getDay() const {
        return day;
    }

    void setMonth(int m) {
        month = m ;
    }
    int getMonth() const {
        return month;
    }

    void setYear(int y) {
        year =y;
    }
    int getYear()const {
        return year;
    }

    // Verifie l'anne comme une anne bissextile
    bool isLeapYear() const {
        if((year % 4 == 0 && year %100 != 0) ||( year % 400)) {
            return true;
        }
        else {
            return false;
        }
    }

    //fonction pour verifier si la date est valide ou non
    bool validateDate()const {
        if(month <1 || month >12) {
            return false;
        }

        //controle de validite jour
        // determiner le nombre de jours dans le mois
        int maxDays;
        switch(month) {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            maxDays =31;
            break;
            case 4: case 6: case 9: case 11:
            maxDays = 30;
            break;
            case 2:
                if(isLeapYear())
                    maxDays =29;
            else
                maxDays =28;
            break;
            default:
                return false;// Dans ce cas, aucune verification supplementaire n'est requise pusique le mois est deja invalide


        }

        if(day <1 || day>maxDays) {
            return false;
        }

        if(year <1900) {
            return false;
        }

        return true;
    }
    //fonction qui imprime la date à l'écran
    void displayDate()const {
        cout<<(day < 10 ? "0": "")<<day<<"/"
        <<(month < 10 ? "0": "")<<month<<"/"
        <<year<<endl;
    }

};

int main() {

    Date date1(29, 2, 2020);
    Date date2(31, 4, 2021);
    Date date3(15, 8, 1947);
    Date date4(30, 2, 1900);

    cout << "Date 1: ";
    date1.displayDate();

    cout << "Est-ce valide ?" << (date1.validateDate() ? "oui" : "non") << endl << endl;
    cout << "Est-ce valide ?" << (date2.validateDate() ? "oui" : "non") << endl << endl;
    cout << "Est-ce valide ?" << (date3.validateDate() ? "oui" : "non") << endl << endl;
    cout << "Est-ce valide ?" << (date4.validateDate() ? "oui" : "non") << endl << endl;


    //Recuperation et validation des informations de date de l'utilisateur
    int d,m,y;
    cout<<"Veuillez saisir une date (Jour Mois Année):";
    cin>>d>>m>>y;
    Date userDate(d,m,y);

    cout<<"Date d'entrée : ";
    userDate.displayDate();
    cout << "Est-ce valide ?" << (userDate.validateDate() ? "oui" : "non") << endl;

    return 0;
}