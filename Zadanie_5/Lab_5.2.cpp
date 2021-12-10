#include <iostream>
#include <string>

using namespace std;

// Написать алгоритм перевода числа из 10 с.с. в 2, 8 и 16 с.с. Пользователь вводит число в
// диапазоне от 0 до 325

void ten(int);
void Eight(int);
void Sixteen(int);
char Simvol(int);

int main()
{
    int number;
    cout << "Entet number 0 - 325 " ;
    cin >> number;
    cout << endl;
    cout << "Ten's = ";
    ten(number);
    cout << endl << "Eight's = " ;
    Eight(number);
    cout << endl << "Sixteen's = " ;
    Sixteen(number);

    return 0;
}

void ten(int numb)
{
    if (numb >= 2 )
    {
        ten(numb/2);
    }
    cout << numb%2;
}

void Eight(int numb)
{
    if (numb >= 8 )
    {
        Eight(numb/8);
    }
    cout << numb%8;
}

void Sixteen(int numb)
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

