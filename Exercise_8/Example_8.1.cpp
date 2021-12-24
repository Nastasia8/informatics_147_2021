#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//что-то общее абстрактное, его не существует, конкретного животного нет (есть отдельные классы животных)
class Animal
{
protected:
    string name;
    string color;
    int age;
public:
    Animal(string n, string c, int a): name(n), color(c), age(a) {}
    string getName() {return name; }
    virtual void show() = 0;
    //{
        //cout << "Name : " << name;
        //cout << "\tColor : " << color << setw(10);
        //cout << "Age : " << age << endl;
    //}
    virtual string speak() = 0;
};



class Dog: public Animal
{
public:
    Dog(string name, string color, int age, string poroda): Animal(name, color, age)
    {
        this -> poroda = poroda;
    }
    void show() override
    {
        //Animal::show();
        cout << "Name : " << name;
        cout << "\tColor : " << color;
        cout << "\tAge : " << age << endl;
        cout << "Poroda : " << poroda << endl;
    }
    string speak() override
    {
        return "gav-gav";
    }
private:
    string poroda;

};



class Cat: public Animal
{
public:
    Cat(string name, string color, int age, int year): Animal(name, color, age)
    {
        this -> year = year;
    }
    void show() override
    {
        cout << "Name : " << name;
        cout << "\tColor : " << color;
        cout << "\tAge : " << age << endl;
        cout << "Year : " << year << endl;
    }
    string speak() override
    {
        return "meow";
    }
private:
    int year;

};



class Raccoon: public Animal
{
public:
    Raccoon(string name, string color, int age, string colorEyes): Animal(name, color, age)
    {
        this -> colorEyes = colorEyes;
    }
    void show() override
    {
        cout << "Name : " << name;
        cout << "\tColor : " << color;
        cout << "\tAge : " << age << endl;
        cout << "Color Eyes : " << colorEyes << endl;
    }
    string speak() override
    {
        return "Urr-urrr";
    }
private:
    string colorEyes;

};


 
int main()
{
    Dog dog("Tao", "black", 2, "Haski");
    dog.show();
    //Animal animal("Henessie", "white", 3);
    cout << dog.getName() << " says " << dog.speak()<< endl << endl;

    Cat cat("Vins", "gray", 3, 2018);
    cat.show();
    cout << cat.getName() << " says " << cat.speak() << endl << endl;

    Raccoon raccoon("Vena", "dark gray", 1, "blue");
    raccoon.show();
    cout << raccoon.getName() << " says " << raccoon.speak() << endl;

    return 0;
}
