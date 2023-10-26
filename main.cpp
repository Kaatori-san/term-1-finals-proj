#include<iostream>
#include<string>
#include"source files\intro.h"
#include"source files\credentials.h"

using namespace std;

main()
{
    intro *pi = new intro();
    pi->program_intro();  
    UserCredentials *uc = new UserCredentials();
    uc->user_credentials();   
}