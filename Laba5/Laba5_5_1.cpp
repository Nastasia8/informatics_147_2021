#include <iostream>

using namespace std;

int nod(int x, int y)
{
  if (x % y == 0)
  {
    return y;
  }
  if (y % x == 0)
  {
    return x;
  }
  if (x > y)
  {
    return nod(x % y, y);
  }
  return nod(x, y % x);
}

// задание 5.1. Только для 3 чисел. До бОльшего кол-ва чисел додуматься пока не могу (реализация через массив?)

int main()
{
    int x, y, z;
    cout << "Введите три целых числа:" << endl;
    cin >> x >> y >> z;
    cout << "НОД для 3-x введенных чисел: " << nod(nod(x, y), z) << endl;
    return 0;
}