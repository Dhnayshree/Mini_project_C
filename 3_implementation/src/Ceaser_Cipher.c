#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

struct Box
{
    char text[100];
    int sk1;
    char sk2[100];
};

int Generate_Secret_Key_1()
{
    srand(time(NULL));
    return (rand()%10);
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

    strcpy(str,calculate_Ceaser_Plain_Text(str, Mess.sk1));
    printf("Generated Plain Text from Ceaser : %s\n", str);

    return 0;
}