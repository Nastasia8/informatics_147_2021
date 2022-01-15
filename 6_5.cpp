#include <iostream>
#include <cmath>
using namespace std;

void prost_ch(int n) {
    int *arr = new int[n]; //динамическое выделение памяти под объект типа int
    
    // занесение чисел в массив:
    for (int i = 2; i <= n; i++) 
    {
        arr[i] = i;
    }
    //отсечение не простых чисел:
    for (int i = 2; i * i <= n; i++)
    {
        if (arr[i]) 
        {
            for (int j = i * i; j <= n; j += i)
            {
                arr[j] = 0; 
            }
        }
    }
    //составление списка простых чисел:
    for (int i = 2; i < n; i++) 
    {
        if (arr[i]) 
        {
            cout << arr[i] << ' ';
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Введите конечное число диапазона" << endl;
    cin >> n;
    prost_ch(n);
    return 0;
}
    