#include <iostream>
#include <cmath>
using namespace std;
int Summa (int, int, int);
int main()
{
    int start; int end; int Sum;
    cout<<"Enter the start and end of the range "<<endl;
    cin>>start>>end;
    cout<<"Sum of even numbers = "<<Summa(start, end, Sum)<<endl;
    return 0;
}

int Summa (int start, int end, int Sum )
{
    while(start<=end)
    {
        Sum +=(start%2==0)?start:0;
        start += 1;
    }
    return Sum;
}