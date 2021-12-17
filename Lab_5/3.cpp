#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Введите два числа" << endl;
    cin >> a >> b;
    while (true)
    {
      if(a > b)
      {
          a = a % b;
      } 
      else
      {
          b = b % a;
      }
      if((a==0) or (b==0))
      {
          cout << "Наибольший общий делитель равен " << (a+b);
          break;
      }
    }
      return 0;
}
