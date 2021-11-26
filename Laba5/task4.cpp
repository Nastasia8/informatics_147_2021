#include <iostream>

using namespace std;
// нахождение НОК
int NOK(int a, int b){
int max;
 // нахождение максимального числа для следующей операции
    if (a > b) max = a;
    else max = b;
    for (int i = max; ; i++) 
        if (i%a == 0 && i%b == 0) return i; // 1 число будет наименьшим общим кратным
}

int main (){
int x, y;
cout << "Введите положительные числа x и y через пробел: ";
cin >> x >> y;
if (x >= 0 && y >= 0){
cout << "NOK равен " << NOK(x, y)<<endl;
}else{
    cout << "Надо было ввести только положительные числа\n";
}
    return 0;
}