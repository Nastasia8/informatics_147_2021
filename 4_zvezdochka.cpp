#include <iostream>//взял у казаевой виталины
#include <cmath>

using namespace std;
float func(float);//значение переменной функции деситично дробное


int main()
{
    int x_nach = -2; int x_kon = 2; float step = 0.5;  float y1;  float y; float a; float b; float c; 
    float E = 1;//тут всякие штуки по типу переменных. простые они, ну без чисел после запятой или с ними. не умею я обьяснять

    printf("x\t y\n");//это выводиться по заданию что бы была таблица
    
    for (float i = x_nach; i <= x_kon; i += step)//цикл
    {
        y1 = func(i);
        printf("%g \t %g \n",i,y1);
    }

    for (float i = x_nach; i <= x_kon; i += step)//тоже цикл
    {
        y1 = func(i);
        if ( (y1 > 0 and y < 0) or (y1 < 0 and y > 0) )
        {
            a = b; 
            b = i; 
            break;
        }
        b = i; y = y1;//конец так сказать чисел в таблице
    }

    cout << endl << "a = " << a << "    b = " << b << endl << endl;//вывод значений 
    
    printf("a\t         b\t c\t b-a\t f(a)\t f(c)\t f(a)*f(c)\n");//тут уже пошел второй этап 

    while (E > 0.0001)//цикл, повторяющий одно и то же действие, пока условие продолжения цикла while остаётся истинным
    {
        c = (a + b)/2;
        E = b-a;
        printf("%g\t %g\t %g\t %g\t %g\t %g\t %g\n", a,b,c,(b-a),func(a), func(c), func(a)*func(c));
        if (func(a)*func(c) < 0)
        {
            b = c;
        }
        else 
        {
            a = c;
        }        
    }

    cout << endl << " c = " << c << endl;//ну тут уже понятно

    return 0;
}       

float func(float x)
{
    return pow(x , 5) - x - 0.2;
}