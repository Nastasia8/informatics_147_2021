#include <iostream>
#include <cmath>

using namespace std;

void Ris(int a, int b, char sym){
    for (int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            if ((i == 1) or (j == 1) or (i == a) or (j == b))
            cout << sym;
            else cout << ' ';       //вычисление по сторонам прямоугольника
        }
        cout <<endl;
    }
}

int main ()
{
 int a, b; // высота и ширина
 char sym;// символ прямоугольника
 
 cout << "Введите через пробел высоту, ширину: ";
 cin >> a >> b;
 cout << "Введите символ для прямоугольника: ";
 cin >> sym;
 Ris(a, b, sym);
    return 0;
}