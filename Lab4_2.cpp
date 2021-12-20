#include <iostream>

using namespace std;

void СhangeVal(float* pa, float* pb)
{
    float c = *pa;
    *pa = *pb;
    *pb = c;
}

int main()
{
    setlocale(LC_ALL, "ru");
    float a = 34.5;
    float b = 67.9;
    cout << "До перемены значений местами " << "a = " << a << " " << "b = " << b << endl;
    СhangeVal(&a, &b);
    cout << "После перемены значений местами " << "a = " << a << " " << "b = " << b << endl;

    return 0;
}