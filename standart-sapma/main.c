#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100  // Maksimum dizi boyutu

// Fonksiyon tanýmý
double calculateStandardDeviation(double data[], int size) {
    double sum = 0.0, mean, standardDeviation = 0.0;

    // Ortalama hesaplama
    for (int i = 0; i < size; ++i) {
        sum += data[i];
    }
    mean = sum / size;

    // Standart sapma hesaplama
    for (int i = 0; i < size; ++i) {
        standardDeviation += pow(data[i] - mean, 2);
    }
    return sqrt(standardDeviation / size);
}

int main() {
    double data[MAX_SIZE];
    int n;

    // Kullanýcýdan dizi boyutunu alma
    printf("Dizi eleman sayýsýný girin: ");
    scanf("%d", &n);

    // Kullanýcýdan dizi elemanlarýný alma
    printf("Dizi elemanlarýný girin:\n");
    for (int i = 0; i < n; ++i) {
        printf("Eleman %d: ", i + 1);
        scanf("%lf", &data[i]);
    }

    // Standart sapmayý hesaplama
    double stdDev = calculateStandardDeviation(data, n);
    printf("Standart Sapma: %.2f\n", stdDev);

    return 0;
}
