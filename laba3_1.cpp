#include <iostream>
#include <cmath>
using namespace std;

float sum(float x, float y){
return x+y;
}
float proisvedenie(float x, float y){
return x*y;
}
float delenie(float x, float y){
return x/y;
}
float rasnost(float x, float y){
return x-y;
}
float stepen(float x, float y){
return pow(x,y);
}
int main(){

cout<<"Enter number operation:"<<endl;
cout<<"1: +"<<endl;
cout<<"2: *"<<endl;
cout<<"3: /"<<endl;
cout<<"4: - "<<endl;
cout<<"5: x^y"<<endl;
int k;
float x,y,f;
cin>>k;
cout<<"Enter x and y"<<endl;
cin>>x;
cin>>y;
switch (k)
{
case 1:
    cout<<"x + y = "<<sum(x,y)<<endl;
    break;
case 2:
    cout<<"x * y = "<<proisvedenie(x,y)<<endl;
    break;
case 3:
    cout<<"x / y = "<<delenie(x,y)<<endl;
    break;
case 4:
    cout<<"x - y = "<<rasnost(x,y)<<endl;
    break;
case 5:
    cout<<"x ^ y = "<<stepen(x,y)<<endl;
    break;
default:
    cout<<"Error: 0<K<6"<<endl;
    break;
}
return 0;
}