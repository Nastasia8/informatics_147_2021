#include <bits/stdc++.h>

using namespace std;

class Employee
{
    string name;
    int age;
    int stag;
    string doljn;
    string adres;
    string tel;
    int chasi;
    int stoim;
    public:
    Employee(string n,int a,int s,string d,string ad,string t,int c,int st)
        {
            this->name=n;
            this->age=a;
            this->stag=s;
            this->doljn=d;
            this->adres=ad;
            this->tel=t;
            this->chasi=c;
            this->stoim=st;
        }
        int zarplata()
        {
            return chasi*stoim;
        }
        float premia()
        {
            if(stag>=1&&stag<3) return chasi*stoim*3/100;
            else if (stag>=3&&stag<6) return chasi*stoim*5/100;
            else if (stag>=6&&stag<9) return chasi*stoim*7/100;
            else if (stag>=10) return chasi*stoim*13/100;
        }
        void getInfo()
        {
            cout<<"name: "<<name<<endl;
            cout<<"age: "<<age<<endl;
            cout<<"Experience(years): "<<stag<<endl;
            cout<<"Position: "<<doljn<<endl;
            cout<<"Address: "<<adres<<endl;
            cout<<"Telephone: "<<tel<<endl;
            cout<<"Business hours: "<<chasi<<endl;
            cout<<"Cost: "<<stoim<<endl;
            cout<<"Salary: "<<zarplata()<<endl;
            cout<<"Bonus: "<<premia()<<endl;
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

int main()
{
    Employee FirstEmployee("Alexey Panfilovich Elesov",25,7,"Senior Software Developer","Visotskaya,4,21","(8)800-555-35-35",220,1500);
    FirstEmployee.getInfo();
    int inf;
    cout<<"Do you want to create file with this information? Enter y-yes or n-no"<<endl;
    cin>>inf;
    if(inf='y'){
        freopen("Information.txt","w",stdout);
        FirstEmployee.getInfo();
    fclose (stdout);
    freopen("CON","w",stdout);
    cout<<"Text file create"<<endl;
    }
    return 0;
}
