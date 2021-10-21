//Вариант 21
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double y;
    float xn = 0.11;
    float xk = 0.36;
    float step = 0.05;
    for(float i = xn; i <= xk; i+= step){
        y = (pow(sin(i), 3) + pow(cos(i), 3))*log(i);
        cout << "y = " << y << endl;
    }
    return 0;
}