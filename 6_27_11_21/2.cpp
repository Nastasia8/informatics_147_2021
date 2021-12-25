#include <iostream>
#include <string> //для функции повтора набора выбранного символа
using namespace std;

void Vivod(int visot)
{
         for (int i = 0; i < visot; ++i)
    {
      cout << string(i + 1, '@'); // вывод нужного числа символов
      cout << endl;
    }
    cout << endl;
    
    for (int i = visot; i >= 1; --i)
    {
       cout << string(i, '#'); // вывод треуг., симметрично расположенного относит. первого
       cout << endl; 
    }
    cout << endl;
    
    
// след. половина взята из другой работы    
//отображение занака $ зеркально относит. второго треугольника
    int i = 1;
    while (i <= visot)
    {
        cout << string(visot - i, ' ') << string(i, '$') << endl; 
        i ++;
    }
    cout << endl;
    
    int j = visot;
    while (j >= 1)
    {
        cout << string(visot - j, ' ') << string(j, '%') << endl;
        j --;
    }  
}
 
int main()
{
    int visot = 4; // высота треугольника
    
    Vivod(visot);
    
    return 0;
 
}