#ifndef SHARE_H_
#define SHARE_H_

#include"bank.h"

class share : public bank
{
private:
    float amt;
    float interest;
    float tinterest;
    int month;

public:
    share(float amt,int month,float interest,float tinterest);
    share();
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