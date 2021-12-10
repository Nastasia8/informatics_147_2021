#include <iostream>
#include <cmath>
using namespace std;

void S(int a)
{
    float Perimetr=(a*a);
    float Square=pow(a,2);
    cout<<"perimetr= "<<Perimetr<<endl<<"Square= "<<Square<<endl;
}

void S(float p, int r)
{
    float Perimetr=2*p*r;
    float Square=p*pow(r,2);
    cout<<"perimetr= "<<Perimetr<<endl<<"Square= "<<Square<<endl;
}

void S(int t, int b, int c, int d, int h)
{
    float Perimetr=t+b+c+d;
    float Square=((t+c)/2)*h;
    cout<<"perimetr= "<<Perimetr<<endl<<"Square= "<<Square<<endl;
}

int main()
{
    int a,r,t,b,c,d,h;
    cout<<"enter the side of the square a= ";
    cin>>a;
    S(a);
    cout<<"Entered radius r= ";
    cin>>r;
    S(3.14, r);
    cout<<"Enter the side of the trapezoid t= ";
    cin>>a;
    cout<<"Enter the side of the trapezoid b= ";
    cin>>b;
    cout<<"Enter the side of the trapezoid c= ";
    cin>>c;
    cout<<"Enter the side of the trapezoid d= ";
    cin>>d;
    cout<<"Enter the height of the trapezoid h= ";
    cin>>h;
    S(t,b,c,d,h);

    return 0;
}