#include <iostream>

using namespace std;

// Вычисление прямоугольника и вывод на консоль

void Rectangle(int a, int b, char symb){
    for (int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            if ((i == 1) or (j == 1) or (i == a) or (j == b))
            cout << symb;
            else cout << ' ';
        }
        cout <<endl;
    }
}

int main (){
    setlocale(0, "");
 int a, b;
 char symb;
 cout << "Введите высоту, ширину и символ (через пробел): ";
 cin >> a >> b >> symb;
 Rectangle(a, b, symb);
    return 0;
}