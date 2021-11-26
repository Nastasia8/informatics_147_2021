#include <iostream>

using namespace std;
int f(int n){
    if (n == 0) return 0; // f(0) = 0
    if (n == 1) return 3; // f(1) = 3
    if (n == 2) return 5; // f(2) = 5
    return f(n-1) + f(n-2) + f(n-3);
}
int main (){
    // 15 чисел заданной последовательности
    for (int i = 0; i < 15; i++){
        cout << "f("<<i << ") = "<< f(i)<<endl;
    }
    return 0;
}