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
    Animal(string n, int a, string c): name(n), age(a), color(c) {}
    string getName() {return name;}
    virtual void show()=0;
    virtual string speak()=0;

    
};
class Dog: public Animal
{
public:
    Dog(string name, int age, string color, string poroda): Animal(name, age, color)
    {
        this->poroda=poroda;
    }
    void show() override
    {
        
        cout<<name<<age<<color<<poroda<<endl;
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
    Cat(string name, int age, string color, int year): Animal(name, age, color)
    {
        this->year=year;
    }
    void show() override
    {
        
        cout<<name<<age<<color<<year<<endl;
    }
    string speak() override
    {
        return "may may";
    }
private:
    int year;
    
};

class Enot : public Animal
{
public:
    Enot(string name, int age, string color, int year): Animal(name, age, color)
    {
        this->year=year;
    }
    void show() override
    {
        
        cout<<name<<age<<color<<year<<endl;
    }
    string speak() override
    {
        return "i am Enot";
    }
private:
    int year;
    
};


int main()
{
    Dog dog("tao", 2, "black", "poroda_1");
    dog.show();
    cout<<dog.getName()<<" says "<<dog.speak()<<endl;
    Cat cat("masa", 3, "grey", 2000);
    cout<<cat.getName()<<" says "<<cat.speak()<<endl;
    Enot enot("Seriy", 4, " grey ", 2017);
    cout<<enot.getName()<<" says "<<enot.speak()<<endl;
    return 0;
}