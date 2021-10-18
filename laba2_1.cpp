#include <iostream>
#include <cmath>

using namespace std;
int main (){
    int x=1;
    int y=5;
    int z=3;
float length;
length=sqrt(x*x+y*y+z*z);
cout<<"length= "<<length<<endl;
    float x2,y2,z2;
    x2=x/length;
    y2=y/length;
    z2=z/length;
    cout<<"Vector b("<<x2<<";"<<y2<<";"<<z2<<")"<<endl;
int x1,y1,z1,scalar_product;
cout<<"Enter x,y,z second vector"<<endl;
cin>>x1>>y1>>z1;
scalar_product=x*x1+y*y1+z*z1;
cout<<"scalar product= "<<scalar_product<<endl;
float vector_product;
vector_product=sqrt(pow(y*z1-z*y1,2)+pow(x*z1-z*x1,2)+pow(x*y1-y*x1,2));
cout<<"Vector product= "<<vector_product<<endl;
return 0;
}