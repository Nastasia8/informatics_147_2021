#include <iostream>
#include <cmath>

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

int nok (int x, int y)
{
  return (x * y) / nod(x, y);
}

int main()
{
  int x, y;
  cout << "Введите последовательно два числа: " << endl;
  cin >> x >> y;
  cout << "НОК (" << x << ";" << y << ") = " << nok (x, y);
  return 0;
}