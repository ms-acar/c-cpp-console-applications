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
    std::cout << "Ki�i say�s�n� giriniz: ";
    std::cin >> n;

    std::vector<Bilgi> kisiler(n); // her ki�i i�in struct dizisi

    for (int i = 0; i < n; i++) {
        std::string ad;
        std::string soyad;
        int kimlik;

        std::cout << "\nKi�i " << i + 1 << ":\n";
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

    std::cout << "\n--- Kay�tl� Ki�iler ---\n";
    for (int i = 0; i < n; i++) {
        std::cout << i + 1 << ". Ki�i: " << kisiler[i].ad << " " << kisiler[i].soyad << " - Kimlik: " << kisiler[i].kimlik << std::endl;
    }

    return 0;
}
