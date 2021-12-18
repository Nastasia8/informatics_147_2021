#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x1=1;
    int y1=5;
    int z1=3;
    float D=0;
    float b=0;
    int sk=0;
    int x2, y2, z2, v, p, r;
    int count;
    cout<<"write 1 or 2 or 3 or 4  ";
    cin>>count;
    switch(count)
    {
        case 1:
        {
        D=sqrt(pow(x1,2)+pow(y1,2)+pow(z1,2));//ДЛИННА ВЕКТОРА
        cout <<"D="<<D<<endl;
        break;
        }
        
        case 2:
        {
            b=sqrt(pow(x1,2)+pow(y1,2)+pow(z1,2));//единичный вектор
            cout<<"Ed={"<<x1<<"/"<<b<<";"<<y1<<"/"<<b<<";"<<z1<<"/"<<b<<";"<<"}"<<endl;
            break;
        }
        
        case 3://скалярное произведение векторов
        {
            cout<<"значение 1"<<endl;
            cin>>x2;
            cout<<"значение 2"<<endl;
            cin>>y2;
            cout<<"значение 3"<<endl;
            cin>>z2;
            
            sk=x1*x2+y1*y2+z1+z2;
            cout<<sk<<endl;
            break;
        }
        case 4://векторное произведение векторов
        {
            cout<<"значение 1"<<endl;
            cin>>x2;
            cout<<"значение 2"<<endl;
            cin>>y2;
            cout<<"значение 3"<<endl;
            cin>>z2;
            v=y1*z2-z1*y2;
            p=z1*x2-x1*z2;
            r=x1*y2-y1*x2;
            cout<<"векторное произведение векторов={"<<v<<";"<<p<<";"<<r<<"}"<<endl;
        }
        return 0;
    }
} 