#include <iostream>
#include <string>
using namespace std;


class cars
{
protected:
	double ls = 0;//лш сил
	double k = 0;//кэф
	double k_age = 0;//кэф2
	double age = 0;
	double rub = 0;
	double month = 0;
	double tax = 0;

public:

	cars(double ls,double age,double rub, double month)
	{
		this->ls = ls;
		this->age = age;
		this->rub = rub;
		this->month = month;
		
	}
	
	virtual double result()
	{
		if (ls < 100){k = 1.2;}
		if (ls > 100 && ls <= 125) { k = 2.5; }
		if (ls > 125 && ls <= 150) { k = 3.5; }
		if (ls > 150 && ls <= 175) { k = 4.5; }
		if (ls > 175 && ls <= 200) { k = 5; }
		if (ls > 200 && ls <= 225) { k = 6.5; }
		if (ls > 225 && ls <= 250) { k = 2.5; }
		if (ls > 250) { k = 15; }
		//
		if (rub < 3) { k_age = 1; }
		if ((rub >= 3 && rub <= 5) || (age < 1)) { k_age = 1.5; }
		if ((rub > 3 && rub <= 5) || (age > 1 && age <=2)) { k_age = 1.3; }
		if ((rub > 3 && rub <= 5) || (age > 2 && age <= 3)) { k_age = 1.3; }
		if ((rub > 5 && rub <= 10) || (age < 5)) { k_age = 2; }
		if ((rub > 10 && rub <= 15) || (age < 10)) { k_age = 3; }
		if ((rub > 15 && rub <= 15) || (age < 20)) { k_age = 3; }
		//
		month = month / 12;
		//
		return(tax = ls * k * (month /12) * k_age);
	}


	
};

int main()
{
	cars leg(140, 0.2, 6, 2);
	cout << leg.result() << endl;
}