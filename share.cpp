#include<iostream>
#include"share.h"
#include"bank.h"
#include<math.h>
using namespace std;

    share::share()
    {
        this->amt=0.0;
        this->month=0;
        this->interest=0.0;
        this->tinterest=0.0;
        
    }

    share::share(float amt,int month,float interest,float tinterest)
    {
        this->amt=amt;
        this->month=month;
        this->interest=interest;
        this->tinterest=tinterest;
    }
//-------------------------------------DISPLAY--------------------------------------------
    void share::display()
    {
        cout<<"\n\n------------------------------------------------------------------------------------------------------------------------------------------------";
        cout<<"\n\t\tShare Account Details";
        cout<<"\n------------------------------------------------";
        cout<<"\n\tAmount : "<<this->amt;
        cout<<"\n\tInterest : -"<<this->interest;
        cout<<"\n\tMonth : "<<this->month;
        cout<<"\n\tInterest (5 year) : -"<<this->tinterest;
        
    }
//-------------------------------------ACCEPT--------------------------------------------
    void share::accept()
    {

        float amt;
        int month;
        cout<<"\n\n------------------------------------------------------------------------------------------------------------------------------------------------";
        cout<<"\n\t\tEnter Share Market Details";
        cout<<"\n------------------------------------------------";
        cout<<"\n\tEnter Amount : ";
        try
        {
            cin>>amt;
            if (amt<50000)
            {
                throw amt;
            }

            else
            {
                this->amt=amt;
                cout<<"\n\tEnter Month : ";
                cin>>this->month;
                this->interest=share::cal_interest();
                this->tinterest=share::cal_totalinterest();
                cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------\n";

            }
            
            
        }
        catch(float e)
        {
            std::cerr <<"\n------For Recurring Account Minimum Balance Should be 50000 your amount is :  "<<amt<<"--------";
            std::cerr<<"\n\tSorry For Incovinence!!!";
        }
    }
//-------------------------------------SET AMOUNT--------------------------------------------
    void share::set_amt(float amt)
    {
        try
        {
            if (amt<50000)
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
            std::cerr <<"\n------For Recurring Account Minimum Balance Should be 50000 your amount is :  "<<amt<<"--------";
            std::cerr<<"\n\tSorry For Incovinence!!!";
        }
    }
//-------------------------------------SET MONTH--------------------------------------------
    void share::set_month(int month)
    {
        cout<<"\n\tEnter Month : ";
        cin>>this->month;
    }
//-------------------------------------GET AMOUNT--------------------------------------------
    float share::get_amt()
    {
        return this->amt;
    }
//-------------------------------------GET MONTH--------------------------------------------
    int share::get_month()
    {
        return this->month;
    }
//-------------------------------------CALCULATE INTEREST 5 YEAR--------------------------------------------
    float share::cal_totalinterest()
    {
        float tinterest=0.0;
        tinterest=this->amt*pow((1+0.012),5);
        return tinterest;
        
    }
//-------------------------------------CALCULATE INTEREST--------------------------------------------
    float share::cal_interest()
    {
        float interest=1.0;
        interest=this->amt*12*0.012;
        return interest;
    }