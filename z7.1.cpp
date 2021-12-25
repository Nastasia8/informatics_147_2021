#include <bits/stdc++.h>

using namespace std;
class Human
{
    string name;
    int age;
    public:
        static int k;
        Human(string n,int a)
        {
            this->name=name;
            this->age=age;
            k++;
        }
        void getInfo()
        {
            cout<<"name: "<<name<<endl;
            cout<<"age: "<<age<<endl;
        }
        string GetName()
        {
            return name;
        }
        void SetName(string n)
        {
            name=n;
        }
};
int Human::k=0;
int main()
{
    Human firstHuman("Georgiy",18);
    firstHuman.getInfo();
    Human secondHuman("Mikhail",24);
    secondHuman.getInfo();
    cout<<Human::k<<endl;
    return 0;
}
