#ifndef BANK_H_
#define BANK_H_

class bank
{
public:
    virtual float get_amt()=0;
    virtual void display()=0;
	virtual void accept()=0;
	virtual float cal_totalinterest()=0;
    virtual float cal_interest()=0;
};
#endif