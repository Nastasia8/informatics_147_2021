#include<iostream>
using namespace std;
int sum(int *pa,int *pb, int *pc){
    (*pa)+=10;
    (*pb)+=10;
    (*pc)+=10;
    return 0;
}
int main(){
    int a=10;
    int b=20;
    int c=30;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    cout<<"-------------"<<endl;
    
    sum( &a, &b, &c );
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
    return 0;
}