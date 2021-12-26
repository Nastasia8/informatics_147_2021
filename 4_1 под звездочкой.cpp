#include <iostream> // подключение библиотеки ввода вывода
#include <cmath> // подключение математической библиотеки 
using namespace std; // используя пространство имен 

int main()
{
    float x_n, x_k, x_step,b,a,c,fa,fc; // объявление переменных. Float - числа с плавающей точкой
    cout<<" Введите начало сигмента"; // вывод на консоль
    cin>>x_n; // считывание
    cout<<"Введите конец сигмента:";
    cin>>x_k;
    cout<<"Введите шаг";
    cin>>x_step;
    for(x_n; x_n<=x_k; x_n+=x_step) // для x_n; x_n<=x_k; x_n+=x_step выполняется след.
    {
        if ((exp(x_n)-pow(x_n,2)-(2*x_n))>0) // если exp(x_n)-pow(x_n,2)-(2*x_n))>0 то
        {
            a=x_n-x_step;
            b=x_n;
            break;
        }
    }
    cout<<"a"<<'\t'<<"b"<<'\t'<<"c"<<'\t'<<"b-a"<<'\t'<<"f(a)"<<'\t'<<'\t'<<"f(c)"<<'\t'<<'\t'<<"f(a)*f(c)"<<endl;
    while((b-a)>=0.0001)// цикл
    {
        c=((a+b)/2); // вычислить середину отрезка по формуле (a+b)/2
        fa=(exp(a)-pow(a,2)-(2*a));
        fc=(exp(c)-pow(c,2)-(2*c));
        cout<<a<<'\t'<<b<<'\t'<<c<<'\t'<<b-a<<'\t'<<fa<<'\t'<<fc<<'\t'<<fa*fc<<endl;
        if((fa*fc)<0) // если fa*fc)<0 выполняется следущее 
        {
            b=c;
        }
        else// в противном случае следующее 
        {
            a=c;
        }
    }
    return 0;
}