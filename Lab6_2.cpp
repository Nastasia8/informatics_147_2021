#include <iostream>
#include <string>

using namespace std;

void tangleF(int h, char g) {
    for (int i = 1; i <= h; i++){
        cout << string(i, g) << endl;
        if (i == h) {
            cout << endl;

            for (int i = h; i >= 1; i--) {
                cout << string(i, g) << endl;
            }
        }
    }
}

void tangleW(int h, char g) {
    int i = 1;
    while (i <= h) {
        cout << string(h - i, ' ') << string(i, g) << endl;
        if (i == h) {
            i = h;
            cout << endl;
            while (i >= 1) {
                cout << string(h - i, ' ') << string(i, g) << endl;
                i--;
            }
            break;
        }
        i++;
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    int h; 
    char g;
    cout << "Введите высоту треугольника: ";
    cin >> h;
    cout << "Введите символ для отрисовки треугольника: ";
    cin >> g;
    tangleF(h, g);
    cout << endl;
    tangleW(h, g);
    return 0;
}