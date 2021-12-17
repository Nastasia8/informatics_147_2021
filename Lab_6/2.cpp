#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int n, k, i;
    char line;
    line = '*';
    cout << "Введите высоту желаемой перамиды " << endl;
    cin >> n;
    cout << "Введите направление пирамиды: 1 - лево, 2 - право " << endl;
    cin >> k;
    /*if (n<2)
    {
        cout << "Введите высоту пирамиды корректно " << endl;
    }
    else if (k!=1 or k!=2)
    {
        cout << "Введите направление пирамиды корректно " << endl;
    }*/
  /// Проверка не проходит, выдаёт ошибку 
  
    if (k==2)
        {
            while (n>0)
            {
                cout << line << endl;
                line += '*'; ///Символ не добавляется
                n=n-1;
            }
        }
    cout << line << endl;
    return 0;
}
