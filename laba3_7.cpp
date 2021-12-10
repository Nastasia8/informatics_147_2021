#include <iostream>
#include<cmath>
using namespace std;

void print(int height, int width, char x){
    cout<<x;
    for (int i = 0; i < width-1; i++)
    {
        cout<<" "<<x;
    }
    cout<<endl;
    for (int i = 0; i < height-2; i++)
    {
        cout<<x;
        for (int j = 0; j < width-2; j++)
        {
            cout<<"  ";
        }
        cout<<" "<<x<<endl;
    }
    cout<<x;
        for (int i = 0; i < width-1; i++)
    {
        cout<<" "<<x;
    }
}
int main(){
    int height,width;
    char x;
    cout<<"Enter height, width and char"<<endl;
    cin>>height;
    cin>>width;
    cin>>x;
    print(height,width,x);
    return 0;
}