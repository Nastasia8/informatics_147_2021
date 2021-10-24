#include <iostream>
#include <cmath>
using namespace std;

int main(){
float a = 4.1, b = 2.7, x_n = 1.2, x_k = 5.2, x_step = 0.8, y;
for (float i = x_n; i <= x_k; i++){
y = a*sqrt(i) - b*log(pow(i, 1/5)) / log(abs(i-1));
cout << "f("<<i<<") = "<<y<<endl;
}
    return 0;
}
