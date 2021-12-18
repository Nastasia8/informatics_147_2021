#include <iostream>//я делал по метаниту
 
void square(int, int, int);
 
int main()
{
    int a = 4;
    int b = 5;
    int c = 6;
    std::cout << "Before square: a = " << a << "\tb=" << b <<  "\tc=" <<c<<std::endl;
    square(a, b, c);
    std::cout << "After square: a = " << a << "\tb=" << b <<  "\tc=" <<c<< std::endl;
 
    return 0;
}
void square(int a, int b, int c)
{
    a = a * a;
    b = b * b;
    c= c * c;
    std::cout << "In square: a = " << a << "\tb=" << b << "\tc=" <<c<<std::endl;
}