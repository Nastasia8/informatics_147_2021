#include<iostream>
using namespace std;
int main (){

    char element;
    char space=' ';
    int length;
    cout<<"Enter char and length"<<endl;
    cin>>element;
    cin>>length;
    int x=0;
    while (x<=length)
    {
        cout<<string(x,element)<<endl;
        x++;
    }
    cout<<endl;
    for (int i = length; i > 0; i--)
    {
        cout<<string(i,element)<<endl;
    }
    x=1;
    for (int i = length-1; i >=0; i--)
    {
        cout<<string(i,space)<<string(x,element)<<endl;
        x++;
    }
    cout<<endl;
    x=length;
    for (int i = 0; i <=length; i++)
    {
        cout<<string(i,space)<<string(x,element)<<endl;
        x--;
    }
    return 0;
}
