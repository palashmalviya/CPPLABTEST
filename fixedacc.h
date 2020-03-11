#ifndef FIXEDACC_H_
#define FIXEDACC_H_
#include"bank.h"
class fixedacc : public bank
{
private:
    float amt;
    float interest;
    float tinterest;
    int month;

public:
    fixedacc();
    fixedacc(float amt,int month,float interest,float tinterest);    
    void display();
    void accept();
    void set_amt(float amt);
    void set_month(int month);
    float get_amt();
    int get_month();
    float cal_totalinterest();
    float cal_interest();
};



#endif