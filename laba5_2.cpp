#include<iostream>
using namespace std;

void foo_2( int x ) {

   if ( x >= 2 ) {
      foo_2( x/2 );
   }
   cout << x % 2;

   return;

}

void foo_8(int x){
    if ( x >= 8 ) {
      foo_8( x/8 );
   }
   cout << x % 8;

   return;
   
}

void foo_16(int x){
    if ( x >= 16 ) {
      foo_8( x/16 );
   }
   int y;
   y=x%16;
   switch (y)
   {
   case 10:
     cout<<"A";
     break;
   
   case 11:
     cout<<"B";
     break;  

   case 12:
     cout<<"C";
     break;     

   case 13:
     cout<<"D";
     break;

   case 14:
     cout<<"E";
     break;  

   case 15:
     cout<<"F";
     break;  

   default:
     cout << x % 16;
     break;
   }
   

   return;
   
}


int main(){
    int x;
    cout<<"Enter number"<<endl;
    cin>>x;
    cout<<"Nunber (2) = ";
    foo_2(x);
    cout<<endl;
    cout<<"Nunber (8) = ";
    foo_8(x);
    cout<<endl;
    cout<<"Nunber (16) = ";
    foo_16(x);
    return 0;
}