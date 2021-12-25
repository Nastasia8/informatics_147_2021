#include <iostream>

using namespace std;

int main() {
    unsigned int digitCount; //колличество цифр
    int sum = 0;
    cout << "How many digits do you wanna enter?: "; // вывест на экран
    cin >> digitCount;
    int* array = new int[digitCount];
    for (int i = 0; i < digitCount; i++) {
        cout << "Enter " << i + 1 << " digit: ";
        cin >> array[i];
    }
    for (int i = 0; i < digitCount; i++) {
        if (array[i] % 2 == 0) {
            sum += array[i];
        }
    }
    cout << "Sum: " << sum << endl;
}
