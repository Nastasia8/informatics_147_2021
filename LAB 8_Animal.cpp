#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:    
    string Name; //для имен и просто слов тип string
    string Colour;
    int Age; //для чисел тип целочисленный int
    
public:
    //N - Name, A - Age, C - Colour
    Animal  (string N, int A, string C ): Name(N), Age(A), Colour(C){}
    string GetName() {return Name;}
    virtual void Show() = 0;
    virtual string Speak() = 0;   
    
};

class Dog: public Animal
{
public:
   Dog(string Name, int Age, string Colour, string Poroda): Animal(Name, Age, Colour)
   {
       this -> Poroda = Poroda;
   }
   
   void Show() override  //Name, Colour и Age берутся из virtual void Show(Animal)
    {
        //cout << Name << ' ' << Age<< ' ' << Colour << ' ' << Poroda << endl;
        cout << "Name: " << Name << "   " << "Age: " << Age << endl;
        cout << "Colour: " << Colour << "    " << "Poroda: " << Poroda << endl;
    }
    
    string Speak() override
    {
        return "Woof-Woof";
    }

private:
    string Poroda;
    
};


class Cat: public Animal
{
public:
   Cat(string Name, int Age, string Colour, int Year): Animal(Name, Age, Colour)
   {
       this -> Year = Year;
   }
   
   void Show() override 
    {
        cout << "Name: " << Name << "   " << "Age: " << Age << endl;
        cout << "Colour: " << Colour << "    " << "Year of born: " << Year << endl;
    }
    
    string Speak() override
    {
        return "Meow";
    }

private:
    int Year;
};



class Raccoon: public Animal
{
public:
    Raccoon(string Name, int Age, string Colour, string fav_food) : Animal(Name, Age, Colour)
    {
        this -> fav_food = fav_food;
    }
    
    void Show() override
    {
        //cout << Name << ' ' << Age << ' ' << Colour << ' ' << fav_food;
        cout << "Name: " << Name << "   " << "Age: " << Age << endl;
        cout << "Colour: " << Colour << "    " << "Favorite food: " << fav_food << endl;
        
    }
    
    string Speak() override
    {
        return "squek";
    }

private:
    string fav_food;
};



int main()
{
    Dog dog("Tao", 5, "black", "Shpitc");
    dog.Show();
    cout << dog.GetName() << " says " << dog.Speak() << endl;
    cout << endl;
    
    Cat cat("Vasya", 3, "Grey", 2001);
    cat.Show();
    cout << cat.GetName() << " says " << cat.Speak() << endl;
    cout << endl;
    
    Raccoon raccoon("Snikers", 4, "gray-white", "nuts and mouses");
    raccoon.Show();
    cout << raccoon.GetName() << " says " << raccoon.Speak() << endl;
    
    


    return 0;
}