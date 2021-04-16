#ifndef __DES_Cipher_H__
#define __DES_Cipher_H__

int Generate_Secret_Key_1();
const char* Generate_Ceaser_Cipher(char str[], int sk1);
const char* calculate_Ceaser_Plain_Text(char str[], int sk1);

#endif