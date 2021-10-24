#include <iostream>
#include <cmath>

using namespace std;

double LenVector(int, int, int);
void MulticupVector(int, int, int, int, int, int);

int main(){
    int cx, cy, cz;
    int ax = 1;
    int ay = 5; 
    int az = 3;
    double len_a, len_b, len_c, multicup;

    len_a = LenVector(1, 5, 3);
    cout << "Длина вектора a = " << len_a << endl;
    cout << "Вектор единичной длинны соноправленный вектору a = " << "{" << 1/len_a << ";" << 5/len_a << ";" << 3/len_a << "}" << endl;
    cout << "Введите координаты вектора c:" << endl;
    cin >> cx >> cy >> cz;
    len_c = LenVector(cx, cy, cz);                           
    multicup = len_a * len_c;
    cout <<"Cкалярное произведение векторов a и c = " << multicup << endl;
    cout << "Векторное произведение векторов a и с = ";
    MulticupVector(ax, ay, az, cx, cy, cz);
    return 0;
}
double LenVector(int ax, int ay, int az){
    return pow(pow(ax, 2)+pow(ay, 2) + pow(az, 2), 0.5);
}

void MulticupVector(int ax, int ay, int az, int cx, int cy, int cz){
    cout << "{" << ay*cz-az*cy << ";" << az*cx-ax*cz << ";" << ax*cy-ay*cx << "}" << endl;
}