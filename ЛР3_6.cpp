#include <iostream>
#include <math.h>

using namespace std;

void PrintScore(int number) {
    int production = 1;
    while (number > 0) {
        production *= number % 10;
        number /= 10;
    }
    cout << production;
}

int main() {
    long int number;
    cout << "Enter digit with 6 signs" << endl;
    cin >> number;

    while (number < 100000 || number > 999999) {
        cout << "Incorrect input" << endl;
        cin >> number;
    }
    cout << "Production of digits is" << endl;
    PrintScore(number);
}

