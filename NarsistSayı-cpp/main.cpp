#include <iostream>
#include <cmath>

bool kontrol(int sayi) {
    int rakamlar[3];
    int sonuc = 0;

    for (int i = 2; i >= 0; i--) {
        rakamlar[i] = sayi % 10;
        sayi /= 10;
    }
    for (int i = 0; i < 3; i++) {
        sonuc += pow(rakamlar[i], 3);
    }
    return sonuc == sayi;
}

int main() {
    int sayi;
    std::cout << "3 basamakli bir sayi giriniz: ";
    std::cin >> sayi;

    bool durum = kontrol(sayi);
    if (durum) {
        std::cout << "Girdiginiz sayi bir narsist sayi ornegidir.\n";
    } else {
        std::cout << "Girdiginiz sayi bir narsist sayi örneði deðildir.\n";
    }
    return 0;
}
