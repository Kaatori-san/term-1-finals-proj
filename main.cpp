#include<iostream>
#include<string>
#include"source files\intro.h"
#include"source files\main-menu.h"

using namespace std;

main()
{
    intro *pi = new intro();
    pi->program_intro();

    menu *mm = new menu();
    mm->main_menu();  
}
