//
// Created by Krm on 30/12/2024.
//
#include <iostream>
#include <vector>

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




        return 0;
}