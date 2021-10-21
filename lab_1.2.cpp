//Вариант 21
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double y;
    float arr[] = {0.2, 0.3, 0.38, 0.43, 0.57};
    int size = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < size; i++){
        y = (pow(sin(arr[i]), 3) + pow(cos(arr[i]), 3))*log(arr[i]);
        cout <<"y = "<< y << endl;
    }
    return 0;
}