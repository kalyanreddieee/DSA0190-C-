#include <iostream>
#include <limits>
using namespace std;
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (cin.fail() || size <= 0) {
        cerr << "Error: Invalid input. Please enter a positive integer." << endl;
        return 1;
    }
    int* arr = nullptr;
    arr = new (nothrow) int[size];
    if (arr == nullptr) {
        cerr << "Error: Memory allocation failed." << endl;
        return 1;
    }
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
        if (cin.fail()) {
            cerr << "Error: Invalid input. Please enter an integer." << endl;
            delete[] arr; 
            return 1;
        }
    }
    cout << "Array elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;

    return 0;
}
