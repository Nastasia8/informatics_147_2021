#include <iostream>

using namespace std;

void svod(int num) {
    while (num != 1 and num > 0) {
        if (num % 2 != 0) {
            cout << "(" << num << " * 3 + 1) / 2 = " << (num * 3 + 1) / 2 << endl;
            num = (num * 3 + 1) / 2;          
        }
        else {
            cout << num << " / 2 = " << num / 2 << endl;
            num = num / 2;
        }
    }
    if (num == 1) {
        cout << "Ваше число стало единицей" << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");

    int num;
    cout << "Введите целое положительное число: ";
    cin >> num;

    if (num <= 0) {
        cout << "Вы ввели число меньше или равное число" << endl;
    }
    
    svod(num);

    return 0;
}