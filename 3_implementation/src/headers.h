#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


int Generate_Secret_Key_1()
{
    srand(time(NULL));
    return (rand()%10);
}

char Generate_Secret_Key_2()
{
    srand(time(NULL));
    return ((char)(rand()%10));
}

const char* Generate_Ceaser_Cipher(char str[], int sk1)
{
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i]>= 'a' && str[i]<= 'z')
        {
            str[i] = (char)((int)(str[i]+sk1-97)%26 +97);
        }
        else if(str[i]>= 'A' && str[i]<= 'Z')
        {
            str[i] = (char)((int)(str[i]+sk1-65)%26 +65);
        }
    }

    return str;
}
 
const char* calculate_Ceaser_Plain_Text(char str[], int sk1)
{
    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i]>= 'a' && str[i]<= 'z')
        {
            str[i] = str[i] - sk1;

            if(str[i]<'a')
            str[i] = str[i] + 'z' - 'a' + 1;

        }
        else if(str[i]>= 'A' && str[i]<= 'Z')
        {
            str[i] = str[i] - sk1;

            if(str[i]<'A')
            str[i] = str[i] + 'Z' - 'A' + 1;
        }
    }

    return str;
}

const char* Generate_ds_Cipher(char str[], char key[] )
{
    char en[100];
    
    for(int i=0; str[i]!='\0';i++)
    str[i] = str[i] ^ key[i];

    return str;
}

