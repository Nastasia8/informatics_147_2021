#include <iostream>
#include <cmath>
using namespace std;

class pendulum
{
    public:
    virtual void frequencyCalculation() = 0;
    virtual void PeriodCalculation() = 0;
    virtual void tipe() = 0;
};

class mathematicalPendulum : public pendulum
{
    public:
    void frequencyCalculation()
    {
        float freq, length= 13, boost=9.8;
        freq=sqrt(boost/length);
        cout<<"cyclic frequency= "<<freq;
    }

    void PeriodCalculation()
    {
        float period, length=13, boost=9.8;
        period=2*3.14*sqrt(length/boost);
        cout<<"\nPeriod= "<<period;
    }
    
    void tipe()
    {
        cout<<"\nmathematical pendulum\n";
    }
};

class springPendulum : public pendulum
{
    public:
    void frequencyCalculation()
    {
        float freq, rigidity=1500, weight=10;
        freq=sqrt(rigidity/weight);
        cout<<"\ncyclic frequency= "<<freq;
    }

    void PeriodCalculation()
    {
        float period, rigidity=1500, weight=10;
        period=2*3.14*sqrt(weight/rigidity);
        cout<<"\nPeriod= "<<period;
    }
    
    void tipe()
    {
        cout<<"\nspring pendulum\n";
    }
};

class physicalPendulum : public pendulum
{
    public:
    void frequencyCalculation()
    {
        float freq, weight=10, boost=9.8, radius=3, length=5;
        freq=sqrt((weight*boost*radius)/length);
        cout<<"\ncyclic frequency= "<<freq;
    }

    void PeriodCalculation()
    {
        float period, weight=10, boost=9.8, radius=3, length=5;
        period=2*3.14*sqrt(length/(boost*weight*radius));
        cout<<"\nPeriod= "<<period;
    }
    
    void tipe()
    {
        cout<<"\nphysical pendulum";
    }
};

int main()
{
    mathematicalPendulum mut;
    pendulum *pend1 = &mut;
    pend1->frequencyCalculation();
    pend1->PeriodCalculation();
    pend1->tipe();
    springPendulum spring;
    pendulum *pend2 = &spring;
    pend2->frequencyCalculation();
    pend2->PeriodCalculation();
    pend2->tipe();
    physicalPendulum phy;
    pendulum *pend3=&phy;
    pend3->frequencyCalculation();
    pend3->PeriodCalculation();
    pend3->tipe();
    return 0;
}