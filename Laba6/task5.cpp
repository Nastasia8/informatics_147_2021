/*Задание 5
Поиск простых чисел на отрезках от 2 до n
*/
#include <iostream>

using namespace std;

void EasyNum(int n){    // Нахождение простых чисел
int a = 2, arr[100], count=0;
for (int i = a; i <=n; i++){
arr[count] = i;
count++;
}

for (int i = 0; i < count; i++){
    for (int j = a; j <= n; j++){
        if (arr[i] != j && arr[i] % j == 0){
            arr[i] = 0;
        }
        else arr[i] = arr[i];
    }
}
for (int i = 0; i <= n; i++){
    if (arr[i] != 0 && arr[i] <= n && arr[i] > 0){
        cout << arr[i]<<" ";
    }
}
cout <<'\n';
}

int main (){
int n;
cout << "Введите число\n\tОт 2 до ";
cin >> n;
EasyNum(n);
    return 0;
}