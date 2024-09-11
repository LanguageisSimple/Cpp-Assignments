#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) 
    return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // given array
    int n = sizeof(arr) / sizeof(arr[0]); // size of the array

    cout << "Indexes of prime numbers in the array: ";
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            cout << i << " "; // print the index of the prime number
        }
    }
    cout << endl;

    return 0;
}