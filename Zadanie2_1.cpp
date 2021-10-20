#include <iostream>
#include <cmath>

using namespace std;
int main ()
{
   int xo;
   int yo;
   int zo;
   int inj;
   const int x=1;
   const int y=5;
   const int z=3;
   float length=sqrt(pow(x,2)+pow(y,2)+pow(z,2)); /*Находим длину вектора a*/
   float b=((x+y+z)/length); /* находим длину единичного вектора*/
   cout<<"Vector length a="<<length<<endl;
   cout<<"Unit vector length b="<<b<<endl;
   cout<<"xo=";
   cin>>xo;
   cout<<"yo=";
   cin>>yo;
   cout<<"zo=";
   cin>>zo;
   cout<<"injection=";
   cin>>inj;
   float scal=abs(sqrt(pow(x,2)+pow(y,2)+pow(z,2))*sqrt(pow(xo,2)+pow(yo,2)+pow(zo,2))*cos(inj)); /* скалярное произведение векторов*/
   int i=(y*zo)-(z*yo);
   int j=(x*zo)-(xo*z);
   int k=(x*yo)-(xo*y);
   float vect=abs(sqrt(pow(i,2)+pow(j,2)+pow(k,2))); /*Векторное произведение векторов*/
   cout<<"scal="<<scal<<endl;
   cout<<"vect="<<vect<<endl;
   return 0;
}

