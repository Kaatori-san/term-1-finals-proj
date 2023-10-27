#include<iostream>
#include<string>
#include"source files\intro.h"
#include"source files\main-menu.h"

using namespace std;

main()
{
    system("cls");
    cout<<endl;
    cout<<"\t|-----------|";
    cout<<"\n\t|  BANKING  |";
	cout<<"\n\t|  SYSTEM   |";
    cout<<"\n\t|-----------|"<<endl<<endl;
	system("pause");

    menu *mm = new menu();
    mm->main_menu();
    
      
}
