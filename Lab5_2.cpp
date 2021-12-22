#include <iostream>

using namespace std;

//Перевод из 10 в 2сс.
void bin(int num) {
    int bin=0, i = 1;
    while (num) {
        bin += (num % 2) * i; 
        num = num / 2;
        i = i * 10;
    }
    cout << bin;
}

//перевод из 10 в 8сс.
void oct(int num){
    int rem, i = 1, oct = 0; 
    while (num != 0){
        rem = num % 8;
        num /= 8;
        oct += rem * i; i *= 10;
    };
    cout << oct;
}

//Перевод из 10 в 16 сс.
void hex(int num) {
    int count;
    if (num == 0) {
        cout << 0;
    }
    count = num % 16;
    num = num / 16;
    if (num > 0 ) {
        hex(num);
    };
    if (count >= 10 ) {
        cout << char(count + 55);
    }
    else {
        cout << count;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");

    int num;

    cout << "Введите положительно целое число число: "; 
    cin >> num;

    if (num<0 )
    {
        cout << "Вы ввели отрицательно число(" << endl;
        exit(0);
    }

    cout << "В 2-й: "; bin(num); cout << endl;
    cout << "В 8-й: "; oct(num); cout << endl;
    cout << "В 16-й: "; hex(num); cout << endl;


    return 0;
}