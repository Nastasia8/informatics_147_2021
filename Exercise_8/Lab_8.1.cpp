#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Pendulum
{
    protected:
    string namePendulum;
    //float G = 9.8;
    //float Pi = 3.14;
public:
    //Pendulum(string nP, float g, float p): namePendulum(nP), G(g), Pi(p) {}
    Pendulum(string nP): namePendulum(nP) {}
    
    string getName() {return namePendulum; }
    double getG() {return 9.8 ; }
    double getPi() {return 3.14 ; }
    virtual void periodOfHesitation() = 0;
    virtual void cyclicFrequency()  = 0;
};  



class physicalPendulum: public Pendulum // Физический маятник
{
public:
    physicalPendulum(string namePendulum, double momentOfInertia, double weight, double distance) : Pendulum(namePendulum)
    {
        this -> momentOfInertia = momentOfInertia;
        this -> weight = weight;
        this -> distance = distance;
    }
    void periodOfHesitation() override
    {
        cout << "Period Of Hesitation : " << 2*static_cast<double>(getPi())*
        sqrt(momentOfInertia/(weight*static_cast<double>(getG())*distance)) << endl;
    }
    void cyclicFrequency() override
    {
        cout << "Cyclic Frequency : " << sqrt((weight*static_cast<double>(getG())*distance)/momentOfInertia) << endl;
    }

private:
    double momentOfInertia;
    double weight;
    double distance;
};



class mathematicalPendulum: public Pendulum // Математический маятник
{
public:
    mathematicalPendulum (string namePendulum, double threadLength) : Pendulum(namePendulum)
    {
        this -> threadLength = threadLength;
    }
    void periodOfHesitation() override
    {
        cout << "Period Of Hesitation : " << (2*static_cast<double>(getPi())*sqrt(threadLength/static_cast<double>(getG()))) << endl;
    }
    void cyclicFrequency() override
    {
        cout << "Cyclic Frequency : " << (sqrt(static_cast<double>(getG())/threadLength)) << endl;
    }

private:
    double threadLength; //  Длина нити
};



class springPendulum: public Pendulum  // Пружинный маятник
{
public:
    springPendulum(string namePendulum, double weight, double rigidity) : Pendulum(namePendulum)
    {
        this -> weight = weight;
        this -> rigidity = rigidity;
    }
    void periodOfHesitation() override
    {
        cout << "Period Of Hesitation : " << (2*static_cast<double>(getPi())*sqrt(static_cast<double>(weight)/rigidity)) << endl;
    }
    void cyclicFrequency() override
    {
        cout << "Cyclic Frequency : " << (sqrt(static_cast<double>(rigidity)/weight)) << endl;
    }

private:
    double weight;      // Масса
    double rigidity;    // Жесткость
};



int main()
{
    mathematicalPendulum pendulum1("Mathematical Pendulum", 4.2);
    physicalPendulum pendulum2 ("Physical Pendulum", 2.2, 4.3, 8.6);
    springPendulum pendulum3 ("Spring Pendulum", 5.3, 4.6);
    
    cout << pendulum1.getName() << "    ";
    pendulum1.periodOfHesitation();
    pendulum1.cyclicFrequency();

    cout << endl << pendulum2.getName() << "    ";
    pendulum2.periodOfHesitation();
    pendulum2.cyclicFrequency();

    cout << endl << pendulum3.getName() << "    ";
    pendulum3.periodOfHesitation();
    pendulum3.cyclicFrequency();


    return 0;
}