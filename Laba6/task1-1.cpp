/*Задание 1
    Модифицировать матрицу
*/
#include <iostream>
/*1 способ преобразования матрицы(от пользователя)*/
using namespace std;

int main (){
int n, m;
cout << "Введите размер массива через пробел (NxM): ";
cin >> n>>m;
cout << "Введите матрицу\n"; // пользователь вводит матрицу
int arr[n][m];
for (int i =0; i < n; i++){
    for (int j =0; j < m; j++){
        cin >> arr[i][j];
    }
}
cout <<"\nВаша матрица\n";
for (int i =0; i < n; i++){
    for (int j =0; j < m; j++){
        cout << arr[i][j]<<'\t';
    }
    cout << endl;
}

cout << endl<<"Переобразование матрицы\n";
for (int i = 0; i < n; i++){
    for (int j = m-1; j >= 0; j--){
        cout << arr[i][j]<<'\t';
    }
    cout << endl;
}
    return 0;
}