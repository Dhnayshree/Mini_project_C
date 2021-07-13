/* 
// Project Name = Mini_project_C
// Source Code = Ceaser_Cipher
// Username = Dhanyashree [ 265351 ]
// Latest Update = 12 July 2021
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<crtdbg.h>

char Generate_Secret_Key_2()        //To generte a single character for the entire text message length
{
    srand(time(NULL));          //generates a new number every second without any repetations
    return ((char)(rand()/65));     //convert the digit to its respective character
}

const char* Generate_ds_Cipher(char str[], char key[] )     //This takes the org text message and XORs it with the generated secret key message.
{
    char en[100];
    
    for(int i=0; str[i]!='\0';i++)
    str[i] = str[i] ^ key[i];

    return str;
}
