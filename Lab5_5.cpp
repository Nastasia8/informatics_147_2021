#include <iostream>

using namespace std;

int NOD(int x, int y) {
    while (x != y) {
        if (x > y) {
            x = x - y;
        }
        else {
            y = y - x;
        }
    }
    return x;
}

int main() {
    setlocale(LC_ALL, "ru");

    int const SIZE;

    cout << "Введите кол-во чисел: " << endl;
    cin >> SIZE;
  
    int arr[SIZE]{};
    cout << "Введите числа для нахождения НОД: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    int result = NOD(arr[0], arr[1]);
    for (int i = 0; i < SIZE; i++){
        NOD(result, arr[i]);
    }
    
    cout << "НОД(";
    for (int i = 0; i < SIZE; i++){
        if (i == SIZE-1) {
            cout << arr[i] << ") = " << result << endl;
            break;
        }
        cout << arr[i] << ";";
    }

    return 0;
}