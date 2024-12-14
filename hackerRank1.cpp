#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Student {
private:
    int age;
    string first_name;
    string last_name;
    int standard;

public:
    // Constructeur par défaut
    Student() : age(0), first_name(""), last_name(""), standard(0) {}

    // Constructeur paramétré
    Student(int a, const string& fn, const string& ln, int s)
        : age(a), first_name(fn), last_name(ln), standard(s) {}

    // Méthodes setters
    void set_age(int s_age) {
        age = s_age;
    }

    void set_first_name(const string& s_name) {
        first_name = s_name;
    }

    void set_last_name(const string& s_surname) {
        last_name = s_surname;
    }

    void set_standard(int s_standard) {
        standard = s_standard;
    }

    // Méthodes getters
    int get_age() const {
        return age;
    }

    string get_first_name() const {
        return first_name;
    }

    string get_last_name() const {
        return last_name;
    }

    int get_standard() const {
        return standard;
    }

    // Méthode to_string
    string to_string_data() const {
        stringstream ss;
        ss << age << "," << first_name << "," << last_name << "," << standard;
        return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    // Lecture des entrées dans l'ordre spécifié
    cin >> age;
    cin >> first_name;
    cin >> last_name;
    cin >> standard;

    // Création et initialisation de l'objet Student
    Student s;
    s.set_age(age);
    s.set_first_name(first_name);
    s.set_last_name(last_name);
    s.set_standard(standard);

    // Affichage des résultats en utilisant les getters
    cout << s.get_age() << "\n";
    cout << s.get_last_name() << ", " << s.get_first_name() << "\n";
    cout << s.get_standard() << "\n";
    cout << s.to_string_data();

    return 0;
}
