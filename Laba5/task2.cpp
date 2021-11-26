#include <iostream>

using namespace std;

// Перевод в 2 с.с.
void cc2(int number){
    int arr[20];
    int count;
    for (int i = 0; number > 0; i++){
        arr[i] = number % 2;
        number /= 2;
        count = i;
    }
    
    for (int i = count; i>=0; i--){
        cout << arr[i];
    }
    cout << endl;
}

// Перевод в 8 с.с.
void cc8(int number){
    int arr[20];
    int count;
    for (int i = 0; number > 0; i++){
        arr[i] = number % 8;
        number /= 8;
        count = i;
    }
    for (int i = count; i>=0; i--){
        cout << arr[i];
    }
    cout << endl;
}
// Перевод в 16 с.с.
void cc16(int number){
        int arr[20];
    char count;
    int d;
    bool symb = false;
    for (int i = 0; number > 0; i++){
        d = number % 16;
             if (d == 10) {d = 'A'; symb = true; arr[i] = (char)d;}
        else if (d == 11) {d = 'B'; symb = true; arr[i] = (char)d;}
        else if (d == 12) {d = 'C'; symb = true; arr[i] = (char)d;}
        else if (d == 13) {d = 'D'; symb = true; arr[i] = (char)d;}
        else if (d == 14) {d = 'E'; symb = true; arr[i] = (char)d;}
        else if (d == 15) {d = 'F'; symb = true; arr[i] = (char)d;}
        else {arr[i] = d; symb = false;}
        number /= 16;
        count = i;
    }
    for (int i = count; i>=0; i--){
        if (symb == true){
        cout <<(char)arr[i];
        } else{
            cout <<arr[i];
        }
    }
    cout << endl;
}

int main () {
    short int number;
    cout << "Введите десятичное число от 0 до 325: ";
    cin >> number;
    if (number > 325 || number < 0) cout << "Вам нужно было ввести диапазон от 0 до 325\n";
    else {
        cout <<"Из десятичного числа "<<number <<" в двоичную равно ";
        cc2(number);
        cout <<"Из десятичного числа "<<number <<" в восьмеричную равно ";
        cc8(number);
        cout <<"Из десятичного числа "<<number <<" в 16 с.с равно ";
        cc16(number);
    }
    return 0;
}
