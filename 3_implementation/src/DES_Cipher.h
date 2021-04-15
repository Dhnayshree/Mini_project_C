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

/*int main()
{
    struct Box Mess;
    char str[100];

    printf("Enter the text message\n");
    fgets(str,sizeof(str),stdin);

    strcpy(Mess.text, str);

    char key[100]; int i;
    for(i=0; str[i]!='\0'; i++)
    {    
        key[i] = Generate_Secret_Key_2();
    }
    //key[i]='\0';
    strcpy(Mess.sk2,key);

    printf("Key 2 : %s\n",Mess.sk2);

    strcpy(str, Generate_ds_Cipher(str, Mess.sk2));
    printf("2nd Ecrypted text : %s\n",Mess.sk2);

    strcpy(str,Generate_ds_Cipher(str, Mess.sk2));
    printf("Generated Plain Text : %s\n", str);


    _CrtDumpMemoryLeaks();

    return 0;
}*/