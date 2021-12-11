#include <iostream>
using namespace std;

void pointers(int *a, int *b, int *c)
{
    (*a)+=2;
    (*b)+=5;
    (*c)--;
}

int main()
{
    int x=5;
    int y=7;
    int z=10;
    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y<<endl;
    cout<<"z= "<<z<<endl;
    int *a=&x;
    int *b=&y;
    int *c=&z;
    cout<<endl;

    pointers(&x, &y, &z);
    cout<<"x= "<<x<<endl;
    cout<<"y= "<<y<<endl;
    cout<<"z= "<<z<<endl;

    return 0;
}