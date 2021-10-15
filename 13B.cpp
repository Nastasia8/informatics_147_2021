#include <iostream>
#include <cmath>
using namespace std;

int main (){
float y, a = 4.1, b = 2.7;
float arr[] {1.9, 2.15, 2.34, 2.73, 3.16};
int size = sizeof(arr)/sizeof(arr[0]);
for (int i = 0; i < size; i++){
    y = a*sqrt(arr[i]) - b*log(pow(arr[i], 1/5)) / log(abs(arr[i]-1));
    cout << "f("<<arr[i]<<") = "<<y<<endl;
}
    return 0;
}