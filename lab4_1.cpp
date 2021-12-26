#include<iostream>
#include<cmath>
#include <iomanip>

using namespace std;

float foo(float i){ //вычисление значения функции

    return 4*i-5*log(i)-5;
}

void local(float a, float b){ //функциялокализации корня 
    int k=0; //переменная кол-ва шагов
    float c;
   while(b-a>0.0001){ //цикл идет пока длинна отрезка не будет меньше 0.0001
       k++; 
    c=(a+b)/2;
    if((foo(a)*foo(c))<0){ 
        a=foo(a);
        b=c;
    }
    else if ((foo(a)*foo(c))>0)
    {
        a=c;
    }
    //cout<<"\t"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<b-a<<"\t"<<foo(a)<<"\t"<<foo(c)<<"\t"<<foo(a)*foo(c)<<endl;
      cout<<setw(14)<<a<<setw(14)<<b<<setw(14)<<c<<setw(14)<<b-a<<setw(14)<<foo(a)<<setw(14)<<foo(c)<<setw(14)<<foo(a)*foo(c)<<endl; 
      //вывод с помощью длины строк(через \t некоторые строчки почему-то кривые)
   }
    cout<<"koren = "<<c<<endl;
    cout<<"k = "<<k<<endl;
}
int main(){
    float x,y,step,x_new,y_new,f;
    cout<<"Enter [x;y] and step: "<<endl;
    cin>>x;
    cin>>y;
    if((x<0)or(y<0)){
        cout<<" x and y => 0"<<endl;
        return 0;
    }
    cin>>step; 
    cout<<"---------------"<<endl;
    x_new=x;
    for (float i = x; i <= y; i=i+step) //формируем 1 таблицу, только до момента изменения знака
    {
        if(i==0){ //при нуле не вычислить ln, пропускаем итерацию с нулем
            continue;
        }
        f=4*i-5*log(i)-5; //вычисляем значение функции
        cout<<i<<"\t"<<f<<endl; //выводим значение функции на текущей итерации
        if((x_new>0)&&(f<0)){ //если нашли смену знака, то выходим из цикла, записав значение y(итерации)
            y_new=i;
           cout<<"------------------------------------------ "<<endl;
            break;
        }
        x_new=i;   
    }
    local(x_new,y_new);
    return 0;
}