#include <iostream>
#include <cmath>
using namespace std;
int calculateSum(int x, int y)//1 сложение
{
    return x+y;
    
}

int calculateSubstraction(int x, int y)//2 вычитание
{
    return x-y;
    
}

int calculateMultiplication(int x, int y)//3 умножение
{
    return x*y;
    
}

int calculateDividing(int x, int y)//4 деление
{
    return x/y;
    
}

int calculateExponentiation(int x, int y)// 5 возведениев степень
{
    return pow(x,y);
}


int main()
{
    
    int x,y,op;
    cout<<"x= ";
    cin>>x;
    cout<<"y= ";
    cin>>y;
    cout<<"op= (1-sum, 2-Substraction, 3-Multiplication, 4-Dividing, 5-Exponentiation)  ";
    cin>>op;
    switch(op)
    {
        case 1:
            cout<<calculateSum(x, y)<<endl;
            break;
        
        case 2:
            cout<<calculateSubstraction(x, y)<<endl;
            break;
        
        case 3:
            cout<<calculateMultiplication(x,y)<<endl;
            break;
            
        case 4:
            cout<<calculateDividing(x,y)<<endl;
            break;
        
        case 5:
            cout<<calculateExponentiation(x,y)<<endl;
            break;
            
    }
}

