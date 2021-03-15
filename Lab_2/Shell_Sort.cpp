#include <iostream>
#include <chrono>
using namespace std;

int main() {
    int a[8] = { 60, 16, 41, 6, 59, 79, 34, 15 }; // Starting array
    int size = 8; // Array size
    int h = 1;
    int i, j;
    int temp; // Variable for element swap
    int compare = 0; // Variable for comparisons
    int swap = 0; // Variable for swaps

    auto start = std::chrono::steady_clock::now();

    while (h >= (size - 1)) {
        h = 3 * h + 1;
    }

    while (h >= 1) {
        for (i = h; i < size; i++) {
            compare++;
            temp = a[i];

            for (j = i - h; j >= 0 && temp < a[j]; j = j - h) {
                a[j + h] = a[j];
                compare++;
                swap++;
            }

            a[j + h] = temp;
        }
        h = h / 3;
    }

    auto finish = std::chrono::steady_clock::now();

    cout << "Sorted array: ";
    for (i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    auto time = std::chrono::duration_cast<std::chrono::microseconds>(finish - start);
    cout << endl;
    cout << "Algorithm work time: " << time.count() << " microseconds";
    cout << endl;
    cout << "Amout of comparisons: " << compare;
    cout << endl;
    cout << "Amount of exchanges: " << swap;
}
