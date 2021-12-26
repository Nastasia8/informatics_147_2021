#include <iostream>

using namespace std;

void pointer(int *znach_1, int *znach_2, int *znach_3) // * - разадрессациия
{
    cout << *znach_1 << " " << *znach_2 << " "<<*znach_3; // вывод на консоль
}

int main()
{
    int znach_1 = 120; // присвоение значения 120
    int znach_2 = 5; // присвоение значения 5
    int znach_3= 1558; // присвоение значения 1558
    pointer(&znach_1, &znach_2, &znach_3);
    return 0;
}