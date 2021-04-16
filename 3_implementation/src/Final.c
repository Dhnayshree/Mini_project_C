//#include "headers.h"

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#include "testFiles.h" 

struct Box
{
    char text[100];
    int sk1;
    char sk2[100];
};

int main()
{
    struct Box Mess;
    char str[100];

    printf("Enter the text message\n");
    fgets(str,sizeof(str),stdin);

    strcpy(Mess.text, str);

    Mess.sk1 = Generate_Secret_Key_1();
    printf("%d\n", Mess.sk1);

    strcpy(str, Generate_Ceaser_Cipher(str, Mess.sk1));
    printf("Ceaser text : %s\n",str);

    char key[100]; int i;
    for(i=0; str[i]!='\0'; i++)
    {    
        key[i] = Generate_Secret_Key_2();
    }
    //key[i]='\0';
    strcpy(Mess.sk2,key);

    printf("\nKey 2 : %s\n",Mess.sk2);

    strcpy(str, Generate_ds_Cipher(str, Mess.sk2));
    printf("2nd Ecrypted text : %s\n",str);

    strcpy(str,Generate_ds_Cipher(str, Mess.sk2));
    printf("Generated Plain Text from DES : %s\n", str);

    strcpy(str,calculate_Ceaser_Plain_Text(str, Mess.sk1));
    printf("Generated Plain Text from Ceaser : %s\n", str);
 
    return 0;
}