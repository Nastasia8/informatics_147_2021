#include <iostream>
#include <cmath>

using namespace std;

void number(int n);

int main() {
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите число n для поиска простых чисел в диопазоне [2; n]: ";
    cin >> n;
    number(n);
    return 0;
}

void number(int n)
{
    int* arr = new int[n + 1];
    for (int i = 0; i <= n; i++) {
        arr[i] = i;            //Создаём к сожалению массив, а не список и заполняем его
    }
    for (int i = 2; i * i <= n; i++) {
        if (arr[i] != 0) {
            for (int j = i * i; j <= n; j = j + i) {
                arr[j] = 0;        //Определяем простые числа
            }
        }
    }
    for (int i = 2; i < n; i++) {
        if (arr[i] != 0) {
            cout << arr[i] << " "; //Отсекаем нолики
        }
    }
}