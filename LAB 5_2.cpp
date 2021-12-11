#include <iostream>
#include <cmath>

using namespace std;

//binary - перевод в двоичную систему
void Bin(int n)
{
    int binn[15];
    for(int i = 14;i >= 0; i--)
    {
        binn[i] = n % 2;
        n = n/2;
    }
    
     for(int i = 0; i <= 14;i++)
    {
        cout << binn [i];
    }
     
}

//octal - переод в 8-ю систему счсления
void Oct(int n)
{
    int arr[20];
    int count;
    for (int i = 0; n > 0; i++){
        arr[i] = n % 8;
        n /= 8;
        count = i;
    }
    
    for (int i = count; i >= 0; i--)
    {
        cout << arr[i];
    }
    
}


int main()
{
    int n;
    cout << "Введите число от 0 до 325: ";
    cin >> n;
    if (n > 325 || n < 0)
    {
        cout << "!!Нужно ввести число от 0 до 325!!";
    }
    else
    {
        cout << "Перевод из 10-й системы сч-я в 2-ю = ";
        Bin(n);
        cout << endl;
        
        cout << "Перевод из 10-й системы сч-я в 8-ю = ";
        Oct(n);
        cout << endl;
    }
    
    //не удалось придумать способ переод  16-ю систему
   
    return 0;
}
