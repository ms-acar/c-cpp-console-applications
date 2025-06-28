#include <iostream>
#include <fstream>
#include <vector>

int main() {
    std::ifstream dosya("veri.txt");
    std::vector<int> dizi(8);
    int hedef;
    int toplam;
    bool bulundu = false;

    for (int i = 0; i < 8; i++) {
        dosya >> dizi[i];
        std::cout << dizi[i] << " ";
    }
    std::cout << std::endl;

    std::cin >> hedef;

    for (int i = 0; i < 8; i++) {
        toplam = 0;
        for (int j = i; j < 8; j++) {
            toplam += dizi[j];
            if (toplam == hedef) {
                std::cout << "Toplam " << hedef << ", dizi[" << i + 1 << "] ile dizi[" << j + 1 << "] arasinda bulundu." << std::endl;
                bulundu = true;
            }
        }
    }

    if (!bulundu) {
        std::cout << "Hedef toplam bulunamadi." << std::endl;
    }

    return 0;
}
