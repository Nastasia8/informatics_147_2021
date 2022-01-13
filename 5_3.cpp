#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y;
    cout << "Введите два положительных числа" << endl;
    cin >> x >> y;
    while (true)
    {
      if(x > y)
      {
          x = x % y;
      } 
      else
      {
          y = y % x;
      }
      if((x==0) or (y==0))
      {
          cout << "Наибольший общий делитель = " << (x + y);
          break;
      }
    }
      return 0;
}