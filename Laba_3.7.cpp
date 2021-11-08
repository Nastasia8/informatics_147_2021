#include <iostream>

using namespace std;

void rectangle(int, int, int);

int main()
{
    int width; int height; char simvol;
    cout <<"Enter the width, height and simvol for the rectangle ";
    cin >> width >> height >> simvol;
    cout << endl;
    rectangle(width, height, simvol);

    return 0;
}

void rectangle (int width, int height,int  simvol)
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= width; j++)
        { 
            if (i == 1 or i == height)
            {
                cout << static_cast<char>(simvol) << "  ";
            }
            else if (j == 1 or j == width)
            {
                cout << static_cast<char>(simvol) << "  ";
            }
            else cout << "   ";
            
        }
        cout << endl;
    }
}