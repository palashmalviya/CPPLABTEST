#include<iostream>
#include"recurring.h"
#include"bank.h"
#include<math.h>
using namespace std;

    recurring::recurring()
    {
        this->amt=0.0;
        this->month=0;
        this->interest=0.0;
        this->tinterest=0.0;
    }

    recurring::recurring(float amt,int month,float interest,float tinterest)
    {
        this->amt=amt;
        this->month=month;
        this->interest=interest;
        this->tinterest=tinterest;
    }
//-------------------------------------DISPLAY--------------------------------------------
    void recurring::display()
    {
        cout<<"\n\n------------------------------------------------------------------------------------------------------------------------------------------------";
        cout<<"\n\t\tRecurring Account";
        cout<<"\n-----------------------------------------------";
        cout<<"\n\tAmount : "<<this->amt;
        cout<<"\n\tInterest : "<<this->interest;
        cout<<"\n\tMonth : "<<this->month;
        cout<<"\n\tInterest (5 year) : "<<this->tinterest;
        cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------\n";
    }
//-------------------------------------ACCEPT--------------------------------------------
    void recurring::accept()
    {

        float amt;
        int month;
        cout<<"\n\n------------------------------------------------------------------------------------------------------------------------------------------------";
        cout<<"\n\t\tEnter Recurring Account Details";
        cout<<"\n------------------------------------------------------";
        cout<<"\n\tEnter Amount : ";
        try
        {
            cin>>amt;
            if (amt<1000)
            {
                throw amt;
            }

            else
            {
                this->amt=amt;
                cout<<"\n\tEnter Month : ";
                cin>>this->month;
                this->interest=recurring::cal_interest();
                this->tinterest=recurring::cal_totalinterest();
                cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------\n";

                
            }
            
            
        }
        catch(float e)
        {
            std::cerr <<"\n\n\n\t------For Recurring Account Minimum Balance Should be 1000 your amount is :  "<<amt<<"--------";
            std::cerr<<"\n\tSorry For Incovinence!!!\n\n";
        }
    }
//-------------------------------------SET AMOUNT--------------------------------------------
    void recurring::set_amt(float amt)
    {
        try
        {
            if (amt<1000)
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
            std::cerr <<"\n\n\n\t------For Recurring Account Minimum Balance Should be 1000 your amount is :  "<<amt<<"--------";
            std::cerr<<"\n\tSorry For Incovinence!!!\n\n";
        }
    }
//-------------------------------------SET MONTH--------------------------------------------
    void recurring::set_month(int month)
    {
        cout<<"\n\tEnter Month : ";
        cin>>this->month;
    }
//-------------------------------------GET AMOUNT--------------------------------------------
    float recurring::get_amt()
    {
        return this->amt;
    }
//-------------------------------------GET MONTH--------------------------------------------
    int recurring::get_month()
    {
        return this->month;
    }
//-------------------------------------CALCULATE INTEREST 5 YEAR--------------------------------------------
    float recurring::cal_totalinterest()
    {
        float tinterest=0.0;
        tinterest=this->amt*pow((1+0.012),5);
        return tinterest;
        
    }
//-------------------------------------CALCULATE INTEREST--------------------------------------------
    float recurring::cal_interest()
    {
        float interest=1.0;
        interest=this->amt*12*0.012;
        return interest;
    }