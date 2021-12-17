#include <iostream>
using namespace std;
    
int prost(int n)
{
    int i;
    int *a = new int [n+1];
    for (int i=1; i <= n; i++)
    {
        a[i]=i;
    }
    while (i<n)
    {
        int i=2;
        for (int i; i <= n; i++)
        {
            if (a[i]%i==0)
            {
                delete a[i]; ///Компилятор ругается на эту строчку
            }
        }
        i+=1;
    }
    return a[];
}
 
int main()
{
    int n;
    cout << "Введите число " << endl;
    cin >> n;
    prost(n);
    return 0;
}
