#include <iostream>
#include <cmath>
using namespace std;
 int size(long int x){
    int size_x=0;
     while (x>0)
     {
        x/=10;
        size_x++;
     }
     return size_x;
 }
 int proizwedenie_zifr(long int x){
     int result=1;
     long int y= 10;
     int z;
     for (int i = 0; i < 6; i++)
     {
        z=x%y;
        result=result*z;
        x/=10;
     }
     return result;
 }
 int main(){
     long int x;
     cout<<"Enter x"<<endl;
     cin>>x;
     if (size(x)!=6){
         cout<<"size x != 6"<<endl;
         cout<<"Try again"<<endl;
         return 0;
     }
     cout<<"proizwedenie zifr = "<<proizwedenie_zifr(x)<<endl;
    return 0;   
 }