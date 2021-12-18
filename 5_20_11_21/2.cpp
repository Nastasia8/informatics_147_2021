#include <iostream>//у казаевой виталины
#include <string>

using namespace std;

// Написать алгоритм перевода числа из 10 с.с. в 2, 8 и 16 с.с. Пользователь вводит число в
// диапазоне от 0 до 325

void ten(int);//здесь функции
void Eight(int);
void Sixteen(int);
char Simvol(int);

int main()
{
    int number;
    cout << "Entet number 0 - 325 " ;//введем значение как в задании
    cin >> number;
    cout << endl;
    cout << "Ten's = ";//десятичная система счисления
    ten(number);
    cout << endl << "Eight's = " ;//восьмиричная
    Eight(number);
    cout << endl << "Sixteen's = " ;//6ти ричная
    Sixteen(number);

    return 0;
}

void ten(int numb)//функция для 10тичнйо
{
    if (numb >= 2 )
    {
        ten(numb/2);
    }
    cout << numb%2;
}

void Eight(int numb)//функция для 8миричной
{
    if (numb >= 8 )
    {
        Eight(numb/8);
    }
    cout << numb%8;
}

void Sixteen(int numb)//функция для 16тиричной
{
    if (numb >= 16 )
    {
        Sixteen(numb/16);
    }
    if (numb%16 <= 9)
    {
        cout << numb%16;
    }
    else { cout << Simvol(numb%16 + 55);   
    }
    
}

char Simvol(int num)
{
    return (char) num;
}