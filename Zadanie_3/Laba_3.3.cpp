#include <iostream>
#include <cmath>

using namespace std;

float Summa(int, float);
float Proizvedenie (int, float);

int main()
{
    int kon; 
    int nachalo = 1;
    float Sum = 0; 
    float Proizved = 1;
    cout << "Enter a final value = ";
    cin >> kon;
    cout << "Summa = " << Summa( kon, Sum)  << endl;
    cout << "Proizvedenie = " <<Proizvedenie(kon , Proizved);
    return 0;
}

float Summa(int kon, float Sum)
{
    for (int i = 1; i <= kon; i ++ )
    {
        Sum += 2/static_cast<double>((2*i+1)*(2*i+3));
    }
    return Sum ;
    
}

float Proizvedenie(int kon, float Proizved)
{
    for (int i = 1; i <= kon; i++ )
    {
        Proizved *=  (pow((-1), (i-1)) + i);
    }
    return Proizved;
}

