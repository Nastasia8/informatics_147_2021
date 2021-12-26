#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    const int n = 4;
    const int m = 4;
    int matr[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            matr[i][j] = rand() % 15;
        }
    }
    for (int i = 0; i < n; ++i, cout << endl) {
        for (int j = 0; j < m; ++j) {
            cout << matr[i][j] << ' ';
        }
    }

    cout << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = m - 1; j >= 0; --j) {
            cout << matr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}