#include <iostream>

using namespace std;

int main()
{
    char symbol; int height; int k = 0; int j;
    cout << "Enter symbol and height for the triangle : " ;
    cin >> symbol >> height ;
    cout << endl;
    int k_1 = height;

    //треугольник вершиной вверх, к левой стороне.
    while (k_1 >= 1)
    {
        k += 1;
        j = k;
        while (j != 0)
        {
            cout << static_cast<char>(symbol) << " ";
            j -= 1;
        }
        cout <<  endl;
        k_1 -= 1;
    }
    cout << endl;

    // треугольник вершиной вниз, к левой стороне.
    for (int i = 0; i < height; i++)
    {
        k = height - i;
        for (int j = k; j >= 1; j--)
        {
            cout << static_cast<char>(symbol) << " ";
        }
        cout << endl;
    }
    cout << endl;

    //треугольник вершиной вверх, к правой стороне.
    for(int i = 1; i <= height; i++)
    {
        k = height - i;
        for (int j = 0; j < k; j++)
        {
            cout << "  " ;
        }
        for (int h = 0; h < i; h++)
        {
            cout << static_cast<char>(symbol) << " ";
        }
        cout << endl;
    }
    cout << endl;

    //треугольник вершиной вниз, к правой стороне.
    while(k_1 < height)
    {
        k = height - k_1;
        for (int j = 0; j < k_1; j++)
        {
            cout << "  " ;
        }
        while(k != 0)
        {
            cout << static_cast<char>(symbol) << " ";
            k -= 1;
        }
        cout << endl;
        k_1 +=1;
    }

    return 0;
}
