#include "unity.h"
#include "Ceaser_cipher.h"
#include "DES_Cipher.h"

int key1()
{
	int num1 = Generate_Secret_Key_1();
	
	if(num1>=0 && num<=9)
		return 0;
	return 1;
}

int key2()
{
	if(Generate_Secret_Key_2())
		return 0;
	return 1;
}

void main()
{
	if(key1() == 0)
		cout<<"Key 1 Generated\n";
	if(key2() == 0)
		cout<<"Key 2 Generated\n";
}
