#include <iostream>
#include <vector>
#include <string>

int main() {
    std::string sayi;
    std::cout << "enter a number: ";
    std::cin >> sayi;
    std::cout << sayi << std::endl;

    while (sayi.length() > 1) {
        int carpim = 1;
        for (char c : sayi) {
            carpim *= (c - '0'); // Convert char to int
        }
        std::cout << carpim << std::endl;
        sayi = std::to_string(carpim);
    }
    std::cout << "persistent sayi sonucu: " << sayi << std::endl;

    return 0;
}
