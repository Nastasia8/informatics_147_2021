#include <iostream>
#include <string>
using namespace std;

class Employee
{
    public:
    string FIO;
    string post;
    int experience;
    string address;
    string phone;
    int hoursWorked;
    int salary;
    int pay;
    int prize;

    Employee(string f, string p, int e, string a, string ph, int h, int s)
    {
        FIO=f;
        post=p;
        experience=e;
        address=a;
        phone=ph;
        hoursWorked=h;
        salary=s;
    }

    void Print()
    {
        cout<<"FIO: "<<FIO<<"\npost: "<<post<<"\nexperience: "<<experience<<"\naddress: "<<address<<"\nNumber Phone: "<<phone<<"\nHours worked: "<<hoursWorked<<"\nsalary: "<<salary<<"\npayment: "<<pay<<"\nprize: "<<prize; 
    }

    void payment()
    {
        pay=hoursWorked*salary;
    }

    void BonusPayments()
    {
        float proc;
        if((experience>1) && (experience<=3))
        {
            proc=pay*0.03;
            prize=pay+proc;
        }
        if((experience>3) && (experience<=6))
        {
            proc=pay*0.05;
            prize=pay+proc;
        }
        if((experience>6) && (experience<=9))
        {
            proc=pay*0.07;
            prize=pay+proc;
        }
        if(experience>10)
        {
            proc=pay*0.13;
            prize=pay+proc;
        }
    }
};


int main()
{
    Employee Georgiy("Petrov Georgiy Aleksandrovich","chief",5,"6 lenin street","89204657213",74,1000);
    Georgiy.payment();
    Georgiy.BonusPayments();
    Georgiy.Print();
    return 0;
}