#include <iostream>//работа взята у бутусова саши. писал где знал.
#include <ctime>

using namespace std;

class Massive 
{
public:
    int rows;
    int columns;
    int **Giga;
    int **TrGiga;
    int **DopGiga;
    //a(конструктор, инициализирующий двумерный динамический массив)
    Massive(int r, int c)//определяеться массив
    {
        rows = r;
        columns = c;
        Giga = new int* [rows];//массив
        for (int i = 0; i <rows; i++)//цикл фор
        {
            Giga[i] = new int[columns];//присваивание новых значений массива, как я понимаю. ниже тоже само
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                Giga[i][j] = rand() % 201 + (-100);
            }
        }
    }
    //b деструктор, освобождающий память
    ~Massive()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] Giga[i];//удаляет цифры в массиве, как я понимаю
        }
        delete Giga;
        for (int i = 0; i < columns; i++)
        {
            delete[] TrGiga[i];
        }
        delete TrGiga;
        for (int i = 0; i < rows; i++)
        {
            delete[] DopGiga[i];
        }
        delete DopGiga;//тут тоже какое-то удаление 
        
    }
    //c публичный метод по отображению двумерного массива
    void showInfo()//функция войд
    {
        for (int i = 0; i < rows; i++)//цикл фор
        {
            for (int j = 0; j < columns; j++)
                cout << Giga[i][j] << " ";//вывод массива
            cout << endl;   
        } 
        cout << endl;  
    }
    //d транспортация матрицы в отдельную функцию
    void transport()
    {
        TrGiga = new int * [columns];//сами преобразования
        for (int i = 0; i < columns; i++)
        {
            TrGiga[i] = new int[rows];//присваивание значений в массиве
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                TrGiga[i][j] = Giga[j][i];
                cout << TrGiga[i][j] << " "; //вывод значений
            } 
            cout << endl;
        }
        cout << endl;
    }
    //f изменение отрицательных значений на нули
    void zero()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (Giga[i][j] < 0)
                {
                    Giga[i][j] = 0;
                }
            }
        }
    }
    //e сумма двух матриц
    void sumMatrix()
    {
        DopGiga = new int * [rows];
        for (int i = 0; i < rows; i++)
        {
            DopGiga[i] = new int[columns];
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                DopGiga[i][j] = rand() % 201 + (-100);
                cout << DopGiga[i][j] << " "; //вывод этой матрицы
            }
            cout << endl;
        }
        cout << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                DopGiga[i][j] = DopGiga[i][j] + Giga[i][j];
                cout << DopGiga[i][j] << " ";//вывод этой матрицы
            }
            cout << endl;
        }
    }
};

int main() 
{
    srand(time(NULL));

    Massive First(3,3);
    Massive Second (4, 4);
    Massive Third (2, 2);
    First.showInfo();
    Second.showInfo();
    Second.zero();
    Second.showInfo();
    First.transport();
    Third.showInfo();
    Third.sumMatrix();


    //1 сумма нечетных элементов двумерного массива
    cout << "Array of odd elements in each row of the array = { ";
    int *sumNechet = new int[First.rows];
    for (int i = 0; i < First.rows; i++)
    {
        int t = 1;
        int sum = 0;
        for (int j = 0; j < First.columns; j++)
        {
            if(t % 2 != 0)
            {
                sum += First.Giga[i][j];//нахождение суммы
            }
            t++;
        }
        sumNechet[i] = sum;
    }
    for (int i =0; i < First.rows; i++)
    {
        cout << sumNechet[i] << " ";//вывод
    }
    cout << "}" << endl;

    //2 максимальныйй элемент в столбце среди нечетных 
    cout << "Array of maximum elements in each column among the odd values = { ";
    int *maxStolbNechet = new int[First.columns];
    for (int i = 0; i < First.columns; i++)
    {
        int max = -1000;
        for (int j = 0; j < First.rows; j++)
        {
            if((First.Giga[j][i] % 2 != 0) && First.Giga[j][i] > max)//условие нахождения
            {
                max = First.Giga[j][i];
            }
        }
        maxStolbNechet[i] = max;
    }
    for (int i =0; i < First.columns; i++)
    {
        if (maxStolbNechet[i] != -1000){
            cout << maxStolbNechet[i] << " ";//вывод
        } else {
            cout << "Nothing! ";
        }
    }
    cout << "}" << endl;

    //3 среднее значение в каждом столбце
    cout << "Array of average value in each column = { ";//вывод
    float *sredStolb = new float[First.columns];
    for (int i = 0; i < First.columns; i++)
    {
        int sred = 0;
        for (int j = 0; j < First.rows; j++)
        {
            sred += First.Giga[j][i];
        }
        sredStolb[i] = sred/First.columns;
    }
    for (int i =0; i < First.columns; i++)
    {
        cout << sredStolb[i] << " ";//вывод среднего значчения
    }
    cout << "}" << endl;

    delete sredStolb;//удаление чего-то. вообще не понимаю. время 00.15аххахаах
    delete sumNechet;//уж извините ,Анастасия Валерьевна. надеюсь на понимание
    delete maxStolbNechet;
    return 0;
}   