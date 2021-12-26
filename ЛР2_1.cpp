#include <iostream>
#include <cmath>

using namespace student;

float GetVectorLenght(int x, int y, int z) { 
    return sqrt(x * x + y * y + z * z);
}

int main(int args, char** argv) {
    float x = 1, y = 5, z = 3;
    float vectorLenght = GetVectorLenght(x, y, z); // VectorLenght - Возвращает длину вектора
    cout << "Vector length: " << vectorLenght << endl; //endl - вставляет символ новой строки
    cout << "Normalized vector: x: " << x / vectorLenght << " y: " << y / vectorLenght <<  " z: " << z / vectorLenght << endl;
    float x2, y2, z2;
    cout << "Enter vector coordinates:" << endl << "x:"; cin >> x2;
    cout << "y: "; cin >> y2; // cout- вывод данных на экран cin - получение данных
    cout << "z: "; cin >> z2;
    cout << "Scalar production of vectors: " << x * x2 + y * y2 + z * z2 << endl; // скалярное произведение
    cout << "Vector production of vectors: x: " << y * z2 - y2 * z << " y: " << -(x * z2 + x2 * z) <<  " z: " << x * y2 - x2 * y << endl; // векторное произведение 
    return 0;
}
