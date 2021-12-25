#include <iostream>

using namespace std;

void shifter(float *x, float *y)
{
    float *px = y;
    float *py = x;
    cout << *px << " " << *py;
}

int main()
{
    float x = 34.5;
    float y = 67.9;
    cout << "Было: " << x << " " << y << endl;
    cout << "Стало: ";
    shifter(&x, &y);
    return 0;
}