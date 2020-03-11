#ifndef RECURRING_H_
#define RECURRING_H_

#include"bank.h"

class recurring : public bank
{
private:
    float amt;
    float interest;
    float tinterest;
    int month;

public:
    recurring(float amt,int month,float interest,float tinterest);
    recurring();
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