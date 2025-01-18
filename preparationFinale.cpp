//
// Created by Krm on 18/01/2025.
//
/*#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

int main() {
    // Bir std::vector oluştur ve verilerle doldur.
    std::vector<int> my_vector = {1, 2, 3, 4, 5, 6};


    // std::array tanımla.
    std::array<int,6> my_array;

    // Vektör içeriğini diziye kopyala.
    // Vektör ve dizinin boyutlarının aynı olduğundan emin olmalıyız.
    if (my_vector.size() == my_array.size()) {
        std::copy(my_vector.begin(), my_vector.end(), my_array.begin());
    } else {
        std::cerr << "Hata: Vektor ve dizi boyutlari eslesmiyor." << std::endl;
        return 1; // Hata durumunda programı sonlandır
    }

    // Diziyi std::reverse ile ters çevir.
    std::reverse(my_array.begin(), my_array.end());

    // Ters çevrilmiş diziyi yazdır.
    std::cout << "Ters cevrilmis dizi:" << std::endl;
    for (int element : my_array) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Bir std::vector tanımla ve değerlerle doldur.
    std::vector<int> v = {5, 9, 1, 4, 3, 8};

    // Vektörü std::sort ve lambda ifadesi ile azalan sırada sırala.
    std::sort(v.begin(), v.end(), [](int a, int b) { return a > b; });

    // Sıralanmış vektörü yazdır.
    std::cout << "Azalan sirada siralanmis vektor:" << std::endl;
    for (int element : v) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}