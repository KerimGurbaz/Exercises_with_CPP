//
// Created by Krm on 30/12/2024.
//
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

using Data = double;

using Ligne  = vector<Data>;

using Matrice = vector<Ligne>;

const Matrice notes {
        {4.0, 5.0, 6.0},  // Jean
        {4.1, 5.1, 4.8},  // Marie
        {3.5, 4.1},       // Joshua
        {4.5, 4.5, 4.6}   // Ali
};

template <typename Container>
double sum(const Container& container) {
        double total = 0.0;

        for(const auto& element : container) {
                total += element;
        }
        return total;
}

template<typename Container>
double average(const Container& container) {
        if(container.empty()) return 0.0;
        return sum(container) / static_cast<double>(container.size());
}





int main() {
        vector<double> sums;
        vector<double> averages;

        //Calculer le total et la moyenne pour chaque ligne
        for(const auto& ligne : notes) {
                sums.push_back(sum(ligne));
                averages.push_back(average(ligne));
        }

        //imprimer les totaux à l'écran
        cout<<"somme : [";
        for(size_t i = 0; i < sums.size(); ++i) {
                cout<<sums[i];
                if(i < sums.size() -1)cout<<", ";
        }
        cout<<"]\n";

        //imprimer les moyennes à l'écran
        cout<<"moyenne : [";
        for(size_t i = 0; i < averages.size(); ++i) {
                cout<<fixed<<setprecision(2)<<averages[i];
                if(i < averages.size() - 1) cout<<", ";
        }
        cout<<"]\n";

        return 0;
}