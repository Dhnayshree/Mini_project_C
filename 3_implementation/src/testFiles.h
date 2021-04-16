#include "unity.h"
#include "Ceaser_cipher.c"
#include "DES_Cipher.c"

	void setUp()
	{	}
	void tearDown()
	{	}
	
	void test_Generate_Secret_Key_1(void)
	{
  		TEST_ASSERT_GREATER_THAN_INT(0, Generate_Secret_Key_1);
  		TEST_ASSERT_LESS_THAN_INT(10, Generate_Secret_Key_1());
	}

    /*void test_Generate_Secret_Key_2(void)
    {
        TEST_ASSERT_GREATER_THAN_CHAR('a', Generate_Secret_Key_2);
    }*/         // do not know the base threshold to give

	int test_main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_Generate_Secret_Key_1);
        
        //RUN_TEST(test_Generate_Secret_Key_2);         //same reason
        

  		return UNITY_END();
	}