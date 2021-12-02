/*Задание 2
    Написать функцию отображающую на экран треугольник заданной высоты
*/
#include <iostream>
//2 способ построения треугольника с циклом while
using namespace std;

int main (){
    int i =0;
    while( i < 4){
        int j =0;
        while (j <= i){
            cout <<'@';
            j++;
        }
        cout << endl;
        i++;
    }
    
    cout << endl;
    while (i > 0){
        int j=0;
        while (j < i){
            cout << '#';
            j++;
        }
        cout << endl;
        i--;
    }

    cout << endl;
    int d=0;
    i = 4;
    while (i > 0){
        int j=0;
        while(j < i-1){
            cout << ' ';
            j++;
        }
        d++;
        int c=0;
        while(c < d){
            cout << '$';
            c++;
        }
        cout << endl;
        i--;
    }
    
    cout << endl;
    d=4;
    
    while(i < 4){
        int j =0;
        while(j < i){
            cout << ' ';
            j++;
        }
        int c=0;
        while(c < d){
            cout << '%';
            c++;
        }
        d--;
        cout << endl;
        i++;
    }
    cout << endl;
    return 0;
}