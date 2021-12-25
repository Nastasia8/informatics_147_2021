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
    Animal(string n, int a, string c): name(n), age(a), colour(c) {}
    string getName() {return name;}
    virtual void show()=0;
    virtual string speak()=0;
};

class Dog: public Animal
{
public:
    Dog(string name, int age, string colour, string poroda): Animal(name, age, colour)
    {
        this->poroda=poroda;
    }
    void show() override
    {
        cout << name << " is " << age << " years oid. He is " << colour << ". And his breed is "<< poroda << "." << endl;
    }
    string speak() override
    {
        return "Uah Uah Uah";
    }
private:
    string poroda;
 
};

class Cat : public Animal ///Почему-то не выводятся данные кота
{
public:
    Cat (string name, int age, string colour, int year): Animal(name, age, colour)
    {
        this->year=year;
    }
    void show() override
    {
        cout << name << " is " << age << " years oid. He is " << colour << ". And he was born in "<< year << "." << endl;
    }
 string speak() override
 {
     return "Mew Mew Mew";
     
 }
private:
    int year;
};


class Raccoon: public Animal
{
public:
    Raccoon (string name, int age, string colour, int year): Animal(name, age, colour)
    {
        this->year=year;
    }
    void show() override
    {
        cout << name << " is " << age << " years oid. He is " << colour << ". And he was born in "<< year << "." << endl;
    }
 string speak() override
 {
     return "Hi Hi Hi";
     
 }
private:
    int year;
};


int main()
{
 Dog dog ("Lucky ", 5, "Golden", "Labrador");
 dog.show();
 cout << dog.getName() << "says " << dog.speak() << endl;
 Cat cat ("Boss", 7, "Grey and white ", 2000);
 cout << cat.getName() <<" says " << cat.speak() << endl;
 Raccoon racoon("Heya ", 1, "Black and white ", 1981);
 racoon.show();
 cout << racoon.getName() << "says " << racoon.speak() << endl;
 return 0;
}
