#include <iostream>
#include <string>
using namespace std;

class Pendulum
{
protected:
	double T;
	double L;
	const double PI = 3.14;
	const double G = 9.8;
public:

	Pendulum(double L)
	{
		this-> L = L;
	}

	virtual double result()
	{
		return (T = 2 * PI * sqrt(L / G));
	}

	virtual double GetT()
	{
		return T;
	}

	virtual string type()
	{
		return "Математический маятник";
	}

};


class Spring_pendulum : public Pendulum
{

	double M;
	double K;

public:

	Spring_pendulum(double M, double K) : Pendulum(L)
	{
		this->M = M;
		this->K = K;

	}

	double result() override
	{
		return(T = 2 * PI * sqrt(M / K));
	}

	 string type() override
	{
		 return "Пружинный маятник";
	}

};


class Physical_pendulum : public Pendulum
{
private:

	double lam;
	double h;
	double r;

public:
	

	Physical_pendulum(double h,double r) : Pendulum(L)
	{
		this->h = h;
		this->r = r;
	}

	double result() override
	{
		lam = h + (r*r / h);
		return(T = 2 * PI * sqrt(lam / G));
	}

	string type() override
	{
		return "Физический маятник";
	}

};


int main()
{
	setlocale(LC_ALL, "ru");

	Pendulum matc(0.3);

	matc.type();
	matc.result();
	cout << matc.type() << " T = : " << matc.GetT() << endl;

	cout << "---------------------" << endl;

	Spring_pendulum sim1(0.3, 1.5);

	sim1.result();
	cout << sim1.type() << " T = : " << sim1.GetT() << endl;
	sim1.type();

	cout << "---------------------" << endl;

	Physical_pendulum sim2(1.1, 2.1);

	sim2.result();
	cout << sim2.type() << " T = : " << sim2.GetT() << endl;
	sim2.type();



	return 0;
}