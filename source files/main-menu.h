// DO NOT FORGET TO INCLUDE HEADER FILES!!!!
#include<iostream>
//#include"create-acc.h"
using namespace std;

class menu
{
    public:
    void main_menu()
    {
    char ch;
	int num;
	do
	{
		system("cls");
		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. NEW ACCOUNT";
		cout<<"\n\n\t02. DEPOSIT AMOUNT";
		cout<<"\n\n\t03. WITHDRAW AMOUNT";
		cout<<"\n\n\t04. BALANCE ENQUIRY";
		cout<<"\n\n\t05. ALL ACCOUNT HOLDER LIST";
		cout<<"\n\n\t06. CLOSE AN ACCOUNT";
		cout<<"\n\n\t07. MODIFY AN ACCOUNT";
		cout<<"\n\n\t08. EXIT";
		cout<<"\n\n\tSelect Your Option (1-8) ";
		cin>>ch;
		system("cls");
		switch(ch)
		{
		case '1': //Account Creation
            /*class *initials = new class();
            initials->void();*/ // sample class format 
            int acno;
	        char name[50];
	        int deposit;
	        char type; 

            cout<<"\nEnter The account No. :";
	        cin>>acno;
	        cout<<"\n\nEnter The Name of The account Holder : ";
	        cin.ignore();
	        cin.getline(name,50);
	        cout<<"\nEnter Type of The account (C/S) : ";
	        cin>>type;
	        type=toupper(type);
	        cout<<"\nEnter The Initial amount(>=500 for Saving and >=1000 for current ) : ";
	        cin>>deposit;
	        cout<<"\n\n\nAccount Created..";

			break;
		case '2':
			// Deposit task
			break;
		case '3':
			// Withdraw task
			break;
		case '4': 
			// Balance inquiry task
			break;
		case '5':
            // Holder list task
			break;
		case '6':
			// Account deletion task
			break;
		 case '7':
			// Account modification task
			break;
		 case '8': // Exit Program
			cout<<"\n\n\tThanks for using bank managemnt system";
			break;
		 default :cout<<"\a";
		}
		cin.ignore();
		cin.get();
	}while(ch!='8');
	return;
    }

// ACCOUNT

};

