#include <iostream>
using namespace std;

void printArr(int a[], int boyut, int index) {
    if (index == boyut) {
        return;
    }
    cout << a[index] << "\t";
    printArr(a, boyut, index + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    printArr(arr, 8, 0);
    return 0;
}
