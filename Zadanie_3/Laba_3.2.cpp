#include <iostream>
#include <cmath>
using namespace std;
float Stoimost(int , int , int );

int main()
{
    int P;
    int n;
    int nach;
    
    cout << "P (Summa) = " ;
    cin >> P;
    cout << "n (kol-vo let) = " ;
    cin >> n;
    cout << "kol-vo nach = ";
    cin >> nach;
    cout << "S = " << Stoimost(P, nach, n)<< endl;
    
    return 0;
}

float Stoimost(int P, int m, int n)
{
    return (P * (pow(( 1 + (0.15*12)/(100*m)) , (m/12)*n))) ;
}
