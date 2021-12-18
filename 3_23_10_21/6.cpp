#include <iostream>
#include <cmath>

using namespace std;

int pr;
void calc(int n)
{
    int pr = 1;
    while (n>0)
    {
        pr *= n % 10;
        n /= 10;
    }
    cout<<pr<<endl;
}

int main()
    {
        long n;
        cout<<"введите 6ти значное число  "<<endl;
        cin>>n;
        while (n<100000 || n>999999)
            {
                cout<<"нет"<<endl;
                cin >>n;
            }
 calc(n);


   


    }