#include <iostream>
#include <math.h>

using namespace std;

void DrawRectangle(int height, int width, char symbol) {
    for (int i = 0; i < height; i++) {
        if (i == 0) {
            for(int i = 0 ; i < width; i++)
            {
                cout << symbol;
            }
            cout<<endl;
        }
        else if (i == height - 1) {
            for(int i = 0; i < width; i++)
            {
                cout << symbol;
            }
            cout << endl;
        }
        else {
            cout << symbol;
            for(int i = 0; i < width - 2; i++) {
                cout << " ";
            }
            cout << symbol << endl;
        }
    }
}


int main() {
    int height, width;
    char symbol;
    cout << "Enter rectangle height" << endl;
	cin >> height;
	cout << "Enter rectangle widht" << endl;
	cin >> width;
	cout << "Enter character to draw" << endl;
	cin >> symbol;
	cout << endl;
    cout << "Resulted rectangle" << endl;
    DrawRectangle(height, width, symbol);
    return 0;
}



