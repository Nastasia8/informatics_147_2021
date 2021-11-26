#include <iostream>
#include <climits>
using namespace std;

// нахождение наибольшего общего делителя
int NOD(int x, int y){
    int res = 0;
    for (int i = 2; i < x+y; i++){
        if (x % i == 0 && y % i == 0){
            res = i;
        }
    }
    return res;
}

int main (){
int x, y;
cout << "Введите положительные числа x и y через пробел: ";
cin >> x >> y;
if (x >= 0 && y >= 0){
cout << "Наибольший общий делитель равен " << NOD(x, y)<<endl;
}else{
    cout << "Надо было ввести только положительные числа\n";
}
    return 0;
}