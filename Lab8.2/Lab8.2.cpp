// Lab8.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
    string name;
    string colour;
    int age;
public:
    Animal (string n, int a, string c): name(n), age(a), colour(c) {}
    string getName() { return name; }
    virtual void show() = 0;
    virtual string speak() = 0;
};

class Dog : public Animal
{
public:
    Dog(string name, int age, string colour, string poroda) : Animal(name, age, colour)
    {
        this->poroda = poroda;
    }
    void show() override
    {
        cout << name << age << colour << poroda << endl;
    }
    string speak() override
    {
        return "Gav";
    }
private:
    string poroda;
};

class Cat : public Animal
{
public:
    Cat(string name, int age, string colour, int year) : Animal(name, age, colour)
    {
        this->year = year;
    }
    void show() override
    {
        cout << name << age << colour << year << endl;
    }
    string speak() override
    {
        return "Mau";
    }
private:
    string year;
};

class Racoon : public Animal
{
public:
    Racoon(string name, int age, string colour, string gender) : Animal(name, age, colour)
    {
        this->gender = gender;
    }
    void show() override
    {
        cout << name << age << colour << gender << endl;
    }
    string speak() override
    {
        return "Urchanie";
    }
private:
    string gender;
};

int main()
{
    Dog dog("Tao", 2, "black", "spaniel");
    dog.show();
    cout << dog.getName() << " Says " << dog.speak() << endl;
    Cat cat("Musya", 3, "grey", 2015);
    cout << cat.getName() << " Says " << cat.speak() << endl;
    Racoon racoon("Vasya", 4, "striped", "male");
    cout << racoon.getName() << " Says " << racoon.speak() << endl;
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
