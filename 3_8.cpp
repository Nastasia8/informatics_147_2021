#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int stolb; int str; int min = 9999999; int n = 1; int max = 0;
cout << "Введите количество строк и столбцов массива " << endl;
cin >> str >> stolb;
int array [str] [stolb];
n = 100 + rand() % 1000; // rand() - генерирование рандомного числа
int max_arr [str];
int min_arr [stolb];
for (int i = 1; i <= str; i++) {
    for (int j = 1; j <= stolb; j++)
    {
        //array[i][j] = 0;
        array[i][j] = 1 + rand() % n; // заполнение текущей ячейки 
        cout << array[i][j] << "  ";
    }
    cout << endl;
}

// поиск минимального элемента:
for (int i = 1; i <= str; i++) {
    for (int j = 1; j <= stolb; j++)
    {
        if (array [i][j] < min ) {
        min = array [i][j];
        }
    }
}
cout << "Минимальный элемент массива = " << min << endl;

// поиск максимального в каждой строке:
for (int i = 1; i <= str; i++) {
    for (int j = 1; j <= stolb; j++) {
        if (array[i][j] > max) {
        max = array [i][j];
        }
    }
    max_arr[i] = max;
    max = 0;
}
cout << "Максимальный элемент в каждой строке = " << endl;

for (int i = 1; i <= str; i++) {
cout << max_arr[i] <<"; ";
}
cout << endl;

// поиск минимального в каждом столбце:
for (int j = 1; j <= stolb; j++) {
    for (int i = 1; i <= str; i++) {
        if (array[i][j] < min)
        {
        min = array [i][j];
        }
    }
    min_arr[j] = min;
    min = 999999;
}
cout << "Минимальный элемент в каждом столбце = " ;
for (int j = 1; j <= stolb; j++) {
cout << min_arr[j] << "; ";
}
return 0;
}
