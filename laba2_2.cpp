#include <iostream>
using namespace std;
int k;
float square(float a,float b,float h);
float square(float p, float r);
float square(float c);

float perimetr(float a,float b,float c, float d);
float perimetr(float p, float r);
float perimetr(float c);

int main(){
cout<<"Enter body type:"<<endl;
cout<<"1 - trapezoid"<<endl;
cout<<"2 - circle"<<endl;
cout<<"3 - square"<<endl;
cin>>k;
    if (k==1){
        float a,b,c,d,h;
        cout<<"Enter a,b,c,d,h"<<endl;
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        cin>>h;
        cout <<"Square = "<<square(a,b,h)<<endl;
        cout<<"Perimetr = "<<perimetr(a,b,c,d)<<endl;
    return 0;
    }
    else if (k==2){
        float p,r;
        cout<<"Enter p and r"<<endl;
        cin>>p;
        cin>>r;
        cout <<"Square = "<<square(p,r)<<endl;
        cout<<"Perimetr = "<<perimetr(p,r)<<endl;
    return 0;
    }
    else if (k==3){
        float c;
        cout<<"Enter c"<<endl;
        cin>>c;
        cout <<"Square = "<<square(c)<<endl;
        cout<<"Perimetr = "<<perimetr(c)<<endl;
    return 0;
    }
    else {
        cout<<"0<k>4"<<endl;
        return 0;
    }
 }

float square(float a,float b,float h){
    return (a+b)/2+h;
}
float square(float p, float r){
    return p*(r*r);
}
float square(float c){
    return c*c;
}
float perimetr(float a,float b,float c, float d){
    return a+b+c+d;
}
float perimetr(float p, float r){
    return 2*p*r;
}
float perimetr(float c){
    return 4*c;
}