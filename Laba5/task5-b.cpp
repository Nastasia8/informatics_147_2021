/*Задание 5-b
Нахождение НОД через разложение чисел на простые множители*/
#include <iostream>

using namespace std;

int NOD(int a, int b){
    if (a > b || a <= 0){
        return a = 1;
    }else{
        return a;
    }
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

    int Array_n[100], count = 0;
        int d = 2;
        while (d * d <= arr[0])
        {
            if (arr[0] % d == 0)
            {
                Array_n[count] = d;
                arr[0] /= d;
                ++count;
            }
            else if (d == 2)
                d = 3;
            else
                d += 2;
        }
        Array_n[count] = arr[0];


    count = 0;
    int Array_res[100];
    for (int i = 1; i < k; i++)
    {
        int Array[100];
        d = 2;
        count = 0;
        while (d * d <= arr[i])
        {
            if (arr[i] % d == 0)
            {
                Array[count] = d;
                arr[i] = arr[i] / d;
                ++count;
            }
            else if (d == 2)
                d = 3;
            else
                d = d + 2;
        }
        Array[count] = arr[i];

        for (int i = 0; i < k; i++){ // нахождение общего множителя и заносим в одномерный массив
            if (Array[i] == Array_n[i]){
                Array_res[i] = Array[i];
            }
        }
    }
    int result=1;
        for(int i = 0; i < 10; i++){
            int Array[100];
            result *= NOD(Array_res[i], Array[i]);
        }
    cout << "НОД = "<<result<<endl;
    return 0;
}