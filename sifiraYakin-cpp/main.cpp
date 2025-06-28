#include <iostream>
#include <vector>
#include <string>

struct Bilgi {
    std::string ad;
    std::string soyad;
    int kimlik;
};

int main() {
    int n;
    std::cout << "Kiþi sayýsýný giriniz: ";
    std::cin >> n;

    std::vector<Bilgi> kisiler(n); // her kiþi için struct dizisi

    for (int i = 0; i < n; i++) {
        std::string ad;
        std::string soyad;
        int kimlik;

        std::cout << "\nKiþi " << i + 1 << ":\n";
        std::cout << "Ad: ";
        std::cin >> ad;
        std::cout << "Soyad: ";
        std::cin >> soyad;
        std::cout << "Kimlik: ";
        std::cin >> kimlik;

        kisiler[i].ad = ad;
        kisiler[i].soyad = soyad;
        kisiler[i].kimlik = kimlik;
    }

    std::cout << "\n--- Kayýtlý Kiþiler ---\n";
    for (int i = 0; i < n; i++) {
        std::cout << i + 1 << ". Kiþi: " << kisiler[i].ad << " " << kisiler[i].soyad << " - Kimlik: " << kisiler[i].kimlik << std::endl;
    }

    return 0;
}
