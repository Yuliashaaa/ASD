#include <iostream>
#include <chrono>
using namespace std;

int main() {
    int a[7] = { 22, 20, -1, -40, 88, -75, -22 }; // Starting array
    int size = 7; // Array size
    int temp; // Variable for element swap
    bool exit = false; // Variable to check swaps;

    auto start = std::chrono::steady_clock::now();

    while (!exit) {
        exit = true;
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - 1 - i; j++) {
                if (a[j] > a[j + 1]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    exit = false;
                }
            }
        }
    }

    auto finish = std::chrono::steady_clock::now();

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    auto time = std::chrono::duration_cast<std::chrono::microseconds>(finish - start);
    cout << endl;
    cout << "Algorithm work time : " << time.count() << " microseconds";
}
