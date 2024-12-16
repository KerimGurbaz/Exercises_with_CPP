//
// Created by Krm on 16/12/2024.
//
#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    vector<int> scores;

public:
    void input(int numScores) {
        scores.resize(numScores);
        for(int & score: scores) {
            cin >> score;
        }
    }

    int calculateTotalScore() const {
        int total = 0;
        for(int score: scores) {
            total += score;
        }
        return total;
    }

};

int main() {
    int n, numScores;

    cin>>n ;
    numScores =5;

    vector<Student> students(n); // nous créons n onjets Student

    for(int i = 0; i < n; ++i) {
        students[i].input(numScores);
    }

    int kristenTotal = students[0].calculateTotalScore();
    int count =0;

    for(int i= 1; i< n; ++i) {
        if(students[i].calculateTotalScore() > kristenTotal) {
            count++;
        }
    }
    cout<<count;
    }