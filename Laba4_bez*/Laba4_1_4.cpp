#include <iostream>
#include <ctime>

using namespace std;

void fillArray (int *massiv, int raz_mas)
{   
    for (int i = 0; i < raz_mas; i++)
    {
        massiv[i] = rand();
    }
}

void show (int *massiv, int raz_mas)
{
    for (int i = 0; i < raz_mas; i++)
    {
            cout << massiv[i] << "\t";
        cout << endl;    
    }
}

void findMin (int *massiv, int raz_mas, int min)
{
    for (int i = 0; i < raz_mas; i++)
    {
            if (massiv[i] < min)
            {
                min = massiv[i];
            }
    }
    cout << "Минимальный элемент массива = " << min << endl;

}

int main() 
{
    srand(time(NULL));

    int min = 32800;
    int raz_mas;

    cout << "Введите размер массива = ";
    cin >> raz_mas;
    cout << endl;

    int *massiv = new int [raz_mas];

    fillArray (massiv, raz_mas);
    show (massiv, raz_mas);
    cout << endl;
    findMin (massiv, raz_mas, min);

    delete [] massiv; // очистка памяти
    return 0; 
}