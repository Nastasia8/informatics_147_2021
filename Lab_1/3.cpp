#include <iostream>
#include <cmath>
using namespace std;

void pointers(int *x, int *y, int *z)
{
    cout << *x << endl;
    cout << *y << endl;
    cout << *z << endl;
}

int main()
{
    int x, y, z;
    cout << "Введите три целых числа " << endl;
    cin >> x >> y >> z; 
    pointers(&x, &y, &z);
    return 0;
}
