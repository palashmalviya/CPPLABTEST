#include<iostream>
#include"fixedacc.h"
#include"bank.h"
#include<math.h>
using namespace std;

    fixedacc::fixedacc()
    {
        this->amt=0.0;
        this->month=0;
        this->interest=0.0;
        this->tinterest=0.0;
        
    }

    fixedacc::fixedacc(float amt,int month,float interest,float tinterest)
    {
        this->amt=amt;
        this->month=month;
        this->interest=interest;
        this->tinterest=tinterest;
    }
//-------------------------------------DISPLAY--------------------------------------------
    void fixedacc::display()
    {
        cout<<"\n\n------------------------------------------------------------------------------------------------------------------------------------------------";
        cout<<"\n\t\tfixedacc Account Details";
        cout<<"\n------------------------------------------------";
        cout<<"\n\tAmount : "<<this->amt;
        cout<<"\n\tInterest : "<<this->interest;
        cout<<"\n\tMonth : "<<this->month;
        cout<<"\n\tInterest(5 year) : "<<this->tinterest;
    }
//-------------------------------------ACCEPT--------------------------------------------
    void fixedacc::accept()
    {

        float amt;
        int month;
        cout<<"\n\n------------------------------------------------------------------------------------------------------------------------------------------------";
        cout<<"\n\t\tEnter Fixed Account";
        cout<<"\n------------------------------------------------";
        cout<<"\n\tEnter Amount : ";
        try
        {
            cin>>amt;
            if (amt<40000)
            {
                throw amt;
            }

            else
            {
                this->amt=amt;
                cout<<"\n\tEnter Month : ";
                cin>>this->month;
                this->interest=fixedacc::cal_interest();
                this->tinterest=fixedacc::cal_totalinterest();
                cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------\n";

            }
            
            
        }
        catch(float e)
        {
            std::cerr <<"\n------For Recurring Account Minimum Balance Should be 40000 your amount is :  "<<amt<<"--------";
            std::cerr<<"\n\tSorry For Incovinence!!!";
        }
    }
//-------------------------------------SET AMOUNT--------------------------------------------
    void fixedacc::set_amt(float amt)
    {
        try
        {
            if (amt<40000)
            {
                throw amt;
            }

            else
            {
                this->amt=amt;
            }

    }
        catch(float e)
        {
            std::cerr <<"\n------For Recurring Account Minimum Balance Should be 40000 your amount is :  "<<amt<<"--------";
            std::cerr<<"\n\tSorry For Incovinence!!!";
        }
    }
//-------------------------------------SET MONTH--------------------------------------------
    void fixedacc::set_month(int month)
    {
        cout<<"\n\tEnter Month : ";
        cin>>this->month;
    }
//-------------------------------------GET AMOUNT--------------------------------------------
    float fixedacc::get_amt()
    {
        return this->amt;
    }
//-------------------------------------GET MONTH--------------------------------------------
    int fixedacc::get_month()
    {
        return this->month;
    }
//-------------------------------------CALCULATE INTEREST 5 YEAR--------------------------------------------
    float fixedacc::cal_totalinterest()
    {
        float tinterest=0.0;
        tinterest=this->amt*pow((1+0.012),5);
        return tinterest;
        
    }
//-------------------------------------CALCULATE INTEREST--------------------------------------------
    float fixedacc::cal_interest()
    {
        float interest=1.0;
        interest=this->amt*12*0.012;
        return interest;
    }