//1. Определить абстрактный класс Маятник, который будет содержать общую функциональность для классов-наследников: Физический, Математический и Пружинный маятники.
#include <iostream>
#include <cmath>

using namespace std;

class Pendulum{ // Маятник
    protected:
    float PI = 3.14;
    public: 
    Pendulum(){}
    virtual void show() =0; // Полный обзор
    virtual string name() =0; // Название маятника
    virtual float Period() =0; // Период колебания
    virtual float W() =0; // Циклическая частота
};
class Physical: public Pendulum{ // Физический маятник
    public:
    Physical(float I, float m, float g, float h): Pendulum(){
        this->I=I;
        this->m=m;
        this->g=g;
        this->h=h;
    }
    float W() override {
        return sqrt((m*g*h)/I);
    }
    float Period() override{
        return 2*PI*sqrt(I/(m*g*h));
    }
    string name() override{
        return "Физический маятник";
    }
    void show() override{
        cout << "Циклическая частота равна "<<W()<<endl
            << "Период равен "<<Period()<<endl
            << "Название: "<< name()<<endl<<endl;
    }
    private:
    float I, m, g, h;
};
class Mathematical: public Pendulum{ // Математический маятник
public:
    Mathematical(float l, float g): Pendulum(){
        this->l=l;
        this->g=g;
    }
    float W() override{
        return sqrt(g/l);
    }
    float Period() override{
        return 2*PI*sqrt(l/g);
    }
    string name() override{
        return "Математический маятник";
    }
        void show() override{
        cout << "Циклическая частота равна "<<W()<<endl
            << "Период равен "<<Period()<<endl
            << "Название: "<< name()<<endl<<endl;
    }
    private:
    float l, g;
};
class Spring: public Pendulum{ // Пружинный маятник
public:
    Spring(float m, float k): Pendulum(){
        this->m=m;
        this->k=k;
    }
    float W() override{
        return sqrt(k/m);
    }
    float Period() override{
        return 2*PI*sqrt(m/k);
    }
    string name() override{
        return "Пружинный маятник";
    }
    void show()override{
        cout << "Циклическая частота равна "<<W()<<endl
            << "Период равен "<<Period()<<endl
            << "Название: "<< name()<<endl<<endl;
    }
    private:
        float m, k;
};

int main (){
    Physical physical(3.4, 12, 10, 5); // I, m, g, h
    Mathematical mathematical(0.9, 10); // l, g
    Spring spring(0.5, 8); // m, k
    physical.show();
    mathematical.show();
    spring.show();
    return 0;
}