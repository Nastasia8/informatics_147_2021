// Гурьянов Илья, гр. 1/147.
// Задание №8, номер 0 (животные)

#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
    string name;
    string color;
    int age;
public:
    Animal(string n, int a, string c): name(n), color(c), age(a) {}
    string getName() {return name;}
    virtual void Show() = 0;
    virtual string Speak() = 0;
};


class Dog: public Animal
{
public:
    Dog(string name, int age, string color, string poroda): Animal(name, age, color)
    {
        this->poroda = poroda;
    }
    void Show() override
    {
        cout << name << "\t" << age << "\t" << color << "\t" << poroda << endl;
    }
    string Speak() override
    {
        return "gav gav gav";
    }
private:
    string poroda;
};


class Cat: public Animal
{
public:
    Cat(string name, int age, string color, int year): Animal(name, age, color)
    {
        this->year = year;
    }
    void Show() override
    {
        cout << name << "\t" << age << "\t" << color << "\t" << year << endl;
    }
    string Speak() override
    {
        return "meow meow meow";
    }
private:
    int year;
};


class Raccoon : public Animal
{
    string habitat; // ареал обитания енота
    float weight; // вес енота
    float length; // длина енота

public:
    Raccoon(string name, int age, string color, string habitat, float weight, float length) : Animal(name, age, color)
    {
        this->habitat = habitat;
        this->weight = weight;
        this->length = length;
    }
    void Show() override
    {
        cout << "Name: " << name << "; age: " << age << "; color: " << color << "; habitat: " << habitat << "; weight: " << weight << "; length: " << length << endl;
    }
    string Speak() override
    {
        return "'yeee yee yee'";
    }
};


int main()
{
    Dog dog("Tao", 2, "black", "poroda_1");
    dog.Show();
    cout << dog.getName() << " says " << dog.Speak() << endl;

    Cat cat("Vasya", 3, "gray", 2018);
    cout << "\n";
    cat.Show();
    cout << cat.getName() << " says " << cat.Speak() << endl;
    
    Raccoon raccoon("Enot-Poloskun", 3, "gray", "Eurasia", 6, 55);
    cout << "\n";
    raccoon.Show();
    cout << raccoon.getName() << " says " << raccoon.Speak() << endl;

    return 0;
}