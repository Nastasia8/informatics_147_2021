#include <iostream>

using namespace std;

// нахождение наибольшего общего делителя
int NOD(int x, int y){
    int res = 0;
    for (int i = 2; i < x+y; i++){
        if (x % i == 0 && y % i == 0){
            res = i;
        }
    }
    return res;
}

int main (){
    int k;
    cout << "Введите кол-во требуемых чисел(от 3 до ∞): ";
    cin >> k;
    if (k < 3) {cout << "Вы ввели меньше 3-х чисел\n"; return 0;}
    else;
    int n; 
    int arr[k];
    int arr_1[k];
    cout << "Введите "<< k<<" положительных чисел: ";
    for (int i = 0; i < k; i++){
            cin >> n;
            arr[i] = n;
    }
    // проверка положительных чисел
    for (int i = 0; i < k; i++){
        if (arr[i] < 0) {cout << "Надо было ввести только положительные числа"; break;}
        else continue;
    }
    for (int i = 1; i < k; i++){
        arr_1[i-1] = NOD(arr[i-1], arr[i]);
    }
    int resNOD = arr_1[0];
    for (int i = 1; i < k; i++){
        if (resNOD == arr_1[i]) 
            resNOD = arr_1[i];
    }
    cout <<"НОД = "<<resNOD<<endl;
    return 0;
}