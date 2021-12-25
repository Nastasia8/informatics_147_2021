#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class Pendulum
{
public:
    virtual double chastota() = 0;
    virtual double period() = 0;
    virtual void type() = 0;
};

//физический маятник:
class phys_pendulum: public Pendulum
{
public:
    phys_pendulum (double m, double g, double l, double I)
    {
        this -> m = m;
        this -> g = g;
        this -> l = l;
        this -> I = I;
    }

    double chastota() override
    {
        return sqrt((m*g*l)/I);
    }

    double period() override
    {
        return 2 * 3.14 * sqrt(I/(m*g*l));
    }

    void type() override
    {
        cout << "Физический маятник" << endl;
    }
private:
    double m;
    double g;
    double l;
    double I;
};

//математическкий маятник:
class mat_pendulum: public Pendulum
{
public:
    mat_pendulum (double g, double l)
    {
        this -> g = g;
        this -> l = l;
    }

    double chastota() override
    {
        return sqrt(g/l);
    }

    double period() override
    {
        return 2 * 3.14 * sqrt(l/g);
    }

    void type() override
    {
        cout << "Математический маятник" << endl;
    }
private:
    double g;
    double l;
};

//пружинный маятниу:
class pryz_pendulum: public Pendulum
{
public:
    pryz_pendulum(double m, double k)
    {
        this->m = m;
        this->k = k;
    }
    double chastota() override
    {
        return sqrt(k/m);
    }
    double period() override
    {
        return 2 * 3.14 * sqrt(m/k);
    }
    void type() override
    {
        cout << "Пружинный маятник" << endl;
    }
private:
    double m;
    double k;
};

int main()
{
    phys_pendulum phys(15, 17, 23, 30);
    phys.type();
    cout << "Циклическая частота физического маятника = " << phys.chastota() << endl << "Период физического маятника = " << phys.period() << endl;

    cout << endl;

    mat_pendulum mat(14, 146);
    mat.type();
    cout << "Циклическая частота математического маятника = " << mat.chastota() << endl << "Период математического маятника = " << mat.period() << endl;

    cout << endl;

    pryz_pendulum pryz(78, 6);
    pryz.type();
    cout << "Циклическая частота пружинного маятника = " << pryz.chastota() << endl;
    cout << "Период пружинного маятника = " << pryz.period() << endl;
    
    return 0;
}