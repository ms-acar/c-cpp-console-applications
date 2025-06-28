#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class AnagramChecker {
private:
    static const int MAX = 256;

public:
    static int anagram(const string& str1, const string& str2) {
        int count1[MAX] = {0};
        int count2[MAX] = {0};

        if (str1.length() != str2.length())
            return 0;

        for (size_t i = 0; i < str1.length(); i++) {
            count1[tolower(str1[i])]++;
            count2[tolower(str2[i])]++;
        }

        for (int i = 0; i < MAX; i++) {
            if (count1[i] != count2[i])
                return 0;
        }

        return 1;
    }

    static void main() {
        string kelime1, kelime2;
        cout << "ilk kelimeyi giriniz: ";
        getline(cin, kelime1);
        cout << "ikinci kelimeyi giriniz: ";
        getline(cin, kelime2);

        if (anagram(kelime1, kelime2) == 1) {
            printf("\"%s\" ve \"%s\" kelimeleri anagramdýr.\n", kelime1.c_str(), kelime2.c_str());
        } else {
            printf("\"%s\" ve \"%s\" kelimeleri anagram deðildir.\n", kelime1.c_str(), kelime2.c_str());
        }
    }
};

int main() {
    AnagramChecker::main();
    return 0;
}
