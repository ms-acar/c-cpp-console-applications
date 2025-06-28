#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 256

int anagram(const char *str1, const char *str2) {
    int count1[MAX] = {0};
    int count2[MAX] = {0};

    if (strlen(str1) != strlen(str2))
        return 0;

    for (int i = 0; str1[i] && str2[i]; i++) {
        count1[(unsigned char)tolower(str1[i])]++;
        count2[(unsigned char)tolower(str2[i])]++;
    }

    for (int i = 0; i < MAX; i++) {
        if (count1[i] != count2[i])
            return 0;
    }

    return 1;
}

int main() {
    char kelime1[] = "yasa";
    char kelime2[] = "asya";

    if (anagram(kelime1, kelime2)) {
        printf("\"%s\" ve \"%s\" kelimeleri anagramdır.\n", kelime1, kelime2);
    } else {
        printf("\"%s\" ve \"%s\" kelimeleri anagram değildir.\n", kelime1, kelime2);
    }

    return 0;
}

