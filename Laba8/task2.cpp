// 2. Расчитать транспортный налог для легкового автомобиля, автобуса, мотоцикла и самолёта
// Для расчета я использовал данные из сайта (https://assistentus.ru/transportnyj-nalog/37-ivanovskaya-oblast/) для расчета транспортного налога в Ивановской области
#include <iostream>
#include <cmath>
using namespace std;

class transTax{
    protected:
    /* 
    power - Мощность
    stake - Ставка
    month - кол-во месяцев
     */
    float power, stake, month;
    public:
    transTax(float p, float m): power(p), month(m) {}
    virtual void show() =0; // Полный обзор
    virtual string NameObj() =0; // Название объекта
    virtual string character() =0; // Уникальные характеристики
    virtual float calc() = 0; // расчет
};

// класс Легковой автомобиль
class Car: public transTax{
    public:
    Car(float power, float month, string name, string ch): transTax(power, month){
        this-> name=name;
        this-> ch=ch;
    }
    string NameObj() override{
        return name;
    }
    string character() override{
        return ch;
    }
    float calc() override{
        if (power > 0 && power <= 100) stake = 10;
        else if (power > 100 && power <= 150) stake = 20;
        else if (power > 150 && power <= 200) stake = 35;
        else if (power > 200 && power <= 250) stake = 60;
        else if (power > 250) stake = 120;
        return power * stake * (round((month / 12)*100)/100);
    }
    void show() override{
        cout << "Результат Car: "<<calc()<<endl
             << "Название: "<< NameObj()<<endl
             << "Функции: "<< character()<<endl<<endl;
    }
    private: 
    string name, ch;
};

// класс Автобус
class Bus: public transTax{
    public:
    Bus(float power, float month, int age, string name, string ch): transTax(power, month){
        this-> age=age;
        this-> name=name;
        this-> ch=ch;
    }
    string NameObj() override{
        return name;
    }
    string character() override{
        return ch;
    }
    float calc() override{
        if (age > 0 && age <= 5){
        if (power > 0 && power <= 200) stake = 44.4;
        else if (power > 200) stake = 33.6;
        } else if (age > 5){
            if (power > 0 && power <= 200) stake = 50;
            else if (power > 200) stake = 40.3;
        }
        return power * stake * (round((month / 12)*100)/100);
    }
    void show() override{
        cout << "Результат Bus: "<<calc()<<endl
             << "Название: "<< NameObj()<<endl
             << "Кол-во лет: "<< age<<endl
             << "Функции: "<< character()<<endl<<endl;
    }
    private: 
    string name, ch; 
    int age;
};

// класс Мотоцикл
class Bike: public transTax{
    public:
    Bike(float power, float month, string name, string ch): transTax(power, month){
        this-> name=name;
        this-> ch=ch;
    }
    string NameObj() override{
        return name;
    }
    string character() override{
        return ch;
    }
    float calc() override{
        if (power > 0 && power <= 20) stake = 4.5;
        else if (power > 20 && power <= 35) stake = 11;
        else if (power > 35) stake = 15;
        return power * stake * (round((month / 12)*100)/100);
    }
    void show() override{
        cout << "Результат Bike: "<<calc()<<endl
             << "Название: "<< NameObj()<<endl
             << "Функции: "<< character()<<endl<<endl;
    }
    private: 
    string name, ch;
};

// класс Самолет
class Plane: public transTax{
    public:
    Plane(float power, float month, string name, string ch): transTax(power, month){
        this-> name=name;
        this-> ch=ch;
    }
    string NameObj() override{
        return name;
    }
    string character() override{
        return ch;
    }
    float calc() override{
        stake = 100;
        return power * stake * (round((month / 12)*100)/100);
    }
    void show() override{
        cout << "Результат Plane: "<<calc()<<endl
             << "Название: "<< NameObj()<<endl
             << "Функции: "<< character()<<endl<<endl;
    }
    private: 
    string name, ch;
};

int main (){
    Car car(113, 12, "Renault Logan", "субкомпактный автомобиль"); // power(мощность), month(кол-во месяцев ставки), name(Название), ch(уникальные функции)
    Bus bus(169, 12, 8, "ПАЗ", "высокопольный автобус"); // power(мощность), month(кол-во месяцев ставки), age(кол-во лет автобусу), name(Название), ch(уникальные функции)
    Bike bike(12.6, 7, "Soul Charger 150", "туристический мотоцикл"); // power(мощность), month(кол-во месяцев ставки), name(Название), ch(уникальные функции)
    Plane plane(45000, 12, "boeing 777", "самый безопасный самолёт"); // power(мощность), month(кол-во месяцев ставки), name(Название), ch(уникальные функции)
    car.show();
    bus.show();
    bike.show();
    plane.show();
    return 0;
}