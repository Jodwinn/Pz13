#include <iostream>
#include <windows.h>
using namespace std;

double findAverage(int* arr, int size) {
    if (size == 0) return 0; 

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return static_cast<double>(sum) / size; 
}

int main() {
    int num[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(num) / sizeof(num[0]);

    cout << "Середнє значення " << findAverage(num, size) << endl;

    return 0;
}
