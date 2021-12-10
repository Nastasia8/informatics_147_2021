#include <iostream>

using namespace std;

void draw (int, int, char);

int main ()
{
    int width, height;
    char simvol;
    cout << "Введите высоту: " << endl;
    cin >> height;
    cout << "Введите ширину: " << endl;
    cin >> width;
    cout << "Введите символ для отрисовки: " << endl;
    cin >> simvol;
    draw (width, height, simvol);
    return 0;
}

void draw (int width, int height, char simvol) 
{
    for (int i = 0; i < height ;i++)
    {
        if (i == 0)
        {
            for (int i = 0; i < width; i++)
            {
                cout << simvol;
            }
            cout << endl;
        }
        else if (i == height - 1)
        {
            for(int i = 0; i < width; i++)
            {
                cout << simvol;
            }
            cout<<endl;
        }
        else if ((i != 0) && (i!= height - 1))
        {
            cout << simvol;
            for (int i = 0; i < width - 2; i++)
            {
                cout << " ";
            }
            cout<< simvol <<endl;
        }
    }
}