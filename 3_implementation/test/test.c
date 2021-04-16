#include "unity.h"
	#include "Ceaser_cipher.h"
    #include "DES_Cipher.h"

	void setUp()
	{	}
	void tearDown()
	{	}
	
	void test(void)
	{
  		TEST_ASSERT_GREATER_OR_EQUAL(0,Generate_Secret_Key_1);
  		//TEST_ASSERT_EQUAL(-30, sum(-50, 20));
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test);

  		return UNITY_END();
	}