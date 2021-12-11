/*Задание 3*/
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main(){
    int n;
    srand(time (NULL));
cout <<"Введите размер массива: ";
cin >> n;
int *array = new int [n];
for (int i = 0; i < n; i++){
    array[i] = rand()%25;
}
for (int i =0; i<n; i++){
    cout << array[i]<<" ";
}
int m = array[0];
for (int i = 0; i < n; i++){
    if (array[i] < m){
        m=array[i];
    }
}

cout << endl<< m <<endl;
delete []array;
    return 0;
}