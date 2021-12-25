// 0. Создать класс Животное, ...
#include <iostream>
using namespace std;

class Animal
{
protected:
    string name, color;
    int age;

public:
    Animal(string n, int a, string c) : name(n), age(a), color(c) {}
    string getName() { return name; }
    virtual void show() = 0;
    virtual string speak() = 0;
};

class Dog : public Animal
{
public:
    Dog(string name, int age, string color, string poroda) : Animal(name, age, color)
    {
        this->poroda = poroda;
    }
    void show() override
    {
        cout << name << ' ' << age << ' ' << color << ' ' << poroda << endl;
    }
    string speak() override
    {
        return "gaw gaw";
    }

private:
    string poroda;
};

class Cat : public Animal
{
public:
    Cat(string name, int age, string color, int year) : Animal(name, age, color)
    {
        this->year = year;
    }
    void show() override
    {
        cout << name << ' ' << age << ' ' << color << ' ' << year << endl;
    }
    string speak() override
    {
        return "meow meow";
    }

private:
    int year;
};
class Raccoon : public Animal
{
public:
    Raccoon(string name, int age, string color, string area) : Animal(name, age, color)
    {
        this->area = area;
    }
    void show() override
    {
        cout << name << ' ' << age << ' ' << color << ' ' << area << '\n';
    }
    string speak() override
    {
        return "**squeak**";
    }

private:
    string area;
};

int main()
{
    Dog dog("Tao", 2, "black", "poroda_1");
    dog.show();
    cout << dog.getName() << " says " << dog.speak() << endl;
    Cat cat("Masia", 3, "grey", 2000);
    cat.show();
    cout << cat.getName() << " says " << cat.speak() << endl;
    Raccoon raccoon("Raketa", 4, "grey", "North America");
    raccoon.show();
    cout << raccoon.getName() << " says " << raccoon.speak() << endl;
    return 0;
}