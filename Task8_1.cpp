// Гурьянов Илья, гр. 1/147.
// Задание №8, номер 1.

#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

class Pendulum
{
protected:
    const float Pi = acos(-1); // константа Пи (находится через обратную тригонометрическую функцию)
    const float g = 9.807; // константа g
public:
    virtual void Show() = 0; // вывод результата
    virtual float periodSwing() = 0; // Период колебания
    virtual float revolutionFrequencies() = 0; // Циклическая частота
};

class PhysicalPendulum: public Pendulum // Физический маятник
{
    float m; // масса маятника
    float l; // растояние от оси вращения до центра масс (длина маятника)
public:
    PhysicalPendulum(float m, float l): Pendulum()
    {
        this->m = m;
        this->l = l;
    }
    float revolutionFrequencies() override // Циклическая частота
    {
        return sqrt((m*g*l) / (m*l*l)); // здесь (m*l*l) - это момент инерции маятника (I) из формулы
    }
    float periodSwing() override // Период колебания
    {
        float I = m * (l*l);
        return 2*Pi*sqrt((m*(l*l)) / (m*g*l));
    }
    void Show() override // вывод результата
    {
        cout << "Физический маятник" << endl;
        cout << "  Циклическая частота = " << revolutionFrequencies() << endl;
        cout << "  Период = " << periodSwing() << endl;
    }
};

class MathematicalPendulum: public Pendulum // Математический маятник
{
    float l; // длина маятника
public:
    MathematicalPendulum(float l): Pendulum()
    {
        this->l = l;
    }
    float revolutionFrequencies() override // Циклическая частота
    {
        return sqrt(g/l);
    }
    float periodSwing() override // Период колебания
    {
        return 2*Pi*sqrt(l/g);
    }
    void Show() override // вывод результата
    {
        cout << "Математический маятник" << endl;
        cout << "  Циклическая частота = " << revolutionFrequencies() << endl;
        cout << "  Период = " << periodSwing() << endl;
    }
};

class SpringPendulum: public Pendulum // Пружинный маятник
{
    float m; // масса маятника
    float k; // жёсткость пружины
public:
    SpringPendulum(float m, float k): Pendulum()
    {
        this->m = m;
        this->k = k;
    }
    float revolutionFrequencies() override // Циклическая частота
    {
        return sqrt(k/m);
    }
    float periodSwing() override // Период колебания
    {
        return 2*Pi*sqrt(m/k);
    }
    void Show() override // вывод результата
    {
        cout << "Пружинный маятник" << endl;
        cout << "  Циклическая частота = " << revolutionFrequencies() << endl;
        cout << "  Период = " << periodSwing() << endl;
    }
};



int main ()
{
    // Локализация (отображение кириллицы в консоли)
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    float mPhys; // масса физического маятника
    float mSpr; // масса пружинного маятника
    float lPsyh; // длина физ. маятника
    float lMath; // длина мат. маятника
    float k; // жёсткость пружины для пруж. маятника


    cout << "Физический маятник." << endl;
    cout << "Введите массу и длину физического маятника (по порядку через пробел): ";
    cin >> mPhys >> lPsyh;
    while (cin.fail() || mPhys <= 0 || lPsyh <= 0) // "защита от дурака"
    {
        cout << "Ошибка." << endl;
        cin.clear(); // очистка флага ошибки cin
        cin.ignore(10000, '\n'); // очистка буфера cin. игнорирование (удаление) первых 10000 символов (либо удаление символов пока не встретит новую строку \n) из буфера cin
        cout << "Введите массу и длину физического маятника (по порядку через пробел): ";
        cin >> mPhys >> lPsyh;
    }

    PhysicalPendulum physicalPendulum(mPhys, lPsyh);
    cout << string(30, '-') << endl;
    physicalPendulum.Show();
    cout << string(30, '-') << endl;



    cout << "\n";
    cout << "Математический маятник." << endl;
    cout << "Введите длину математического маятника: ";
    cin >> lMath;
    while (cin.fail() || lMath <= 0) // "защита от дурака"
    {
        cout << "Ошибка." << endl;
        cin.clear(); // очистка флага ошибки cin
        cin.ignore(10000, '\n'); // очистка буфера cin. игнорирование (удаление) первых 10000 символов (либо удаление символов пока не встретит новую строку \n) из буфера cin
        cout << "Введите длину математического маятника: ";
        cin >> lMath;
    }

    MathematicalPendulum mathematicalPendulum(lMath);
    cout << string(30, '-') << endl;
    mathematicalPendulum.Show();
    cout << string(30, '-') << endl;



    cout << "\n";
    cout << "Пружжинный маятник." << endl;
    cout << "Введите массу пружинного маятника и жёсткость пружины (по порядку через пробел): ";
    cin >> mSpr >> k;
    while (cin.fail() || mSpr <= 0 || k <= 0) // "защита от дурака"
    {
        cout << "Ошибка." << endl;
        cin.clear(); // очистка флага ошибки cin
        cin.ignore(10000, '\n'); // очистка буфера cin. игнорирование (удаление) первых 10000 символов (либо удаление символов пока не встретит новую строку \n) из буфера cin
        cout << "Введите массу пружинного маятника и жёсткость пружины (по порядку через пробел): ";
        cin >> mSpr >> k;
    }

    SpringPendulum springPendulum(mSpr, k);
    cout << string(30, '-') << endl;
    springPendulum.Show();
    cout << string(30, '-') << endl;

    return 0;
}