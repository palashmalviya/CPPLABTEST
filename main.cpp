#include<iostream>
#include"bank.h"
#include"share.h"
#include"share.cpp"
#include"recurring.h"
#include"recurring.cpp"
#include"fixedacc.h"
#include"fixedacc.cpp"

using namespace std;


int main()
{
    int choice;
	float amt;
    bank *acc[3];

		        for(int i=0;i<3;i++)
					{
						cout<<"\n\n\t---------------------------Account----------------------------";
						cout<<"\n\t1. Recurring Account";
	                    cout<<"\n\t2. Fixed Account";
	                    cout<<"\n\t3. Share Market Investment";


						cout<<"\n\n\tEnter Choice : ";
						cin >> choice;
						switch(choice)
						{
						case 1:
							acc[i] = new recurring;
                            acc[i]->accept();
							amt=acc[i]->get_amt();
							if (amt<1000)
							{
								--i;
							}
							cout<<"\n\n";
							break;
							
						case 2:
							acc[i] = new fixedacc;
							acc[i]->accept();
							amt=acc[i]->get_amt();
							if (amt<40000)
							{
								--i;
							}
							cout<<"\n\n";
                            break;

						case 3:
							acc[i] = new share;
							acc[i]->accept();	
							amt=acc[i]->get_amt();
							if (amt<50000)
							{
								--i;
							}						
							cout<<"\n\n";
							break;
                        }
						}

						for (int i = 0; i < 3; i++)
						{
							acc[i]->display();
						}
						

        for (int i = 0; i < 3; i++) 
        {
		    delete acc[i];
	    }

    return 0;
}