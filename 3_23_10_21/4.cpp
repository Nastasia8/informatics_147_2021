#include <iostream>
#include <cmath>
using namespace std;
int Summa (int, int, int);
int main()
{
    int start; int end; int Sum;
    cout<<"Введите начало и конец диапозона "<<endl;
    cin>>start>>end;
    cout<<"Сумма четных чисел = "<<Summa(start, end, Sum)<<endl;
    return 0;
}

int Summa (int start, int end, int Sum )
{
    while(start<=end)//понял только с вайл
    {
        Sum +=(start%2==0)?start:0;
        start += 1;
    }
    return Sum;
}