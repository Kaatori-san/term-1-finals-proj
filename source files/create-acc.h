#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
using namespace std;

class AccountCreation
{
public:
    void create_account()
    {
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

    AccountCreation ac;
	ofstream outFile;
	outFile.open("account.dat",ios::binary|ios::app);
	ac.create_account();
	outFile.write(reinterpret_cast<char *> (&ac), sizeof(AccountCreation));
	outFile.close();
    }
};
