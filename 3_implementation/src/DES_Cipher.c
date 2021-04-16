#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<crtdbg.h>

char Generate_Secret_Key_2()
{
    srand(time(NULL));
    return ((char)(rand()/65));
}

const char* Generate_ds_Cipher(char str[], char key[] )
{
    char en[100];
    
    for(int i=0; str[i]!='\0';i++)
    str[i] = str[i] ^ key[i];

    return str;
}