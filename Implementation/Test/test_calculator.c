#include<interest.h>








#include "unity.h"

#define PROJECT_NAME "Calculator"





void test_interest_1(void);
void test_interest_2(void);


void setUp(){}

void tearDown(){}

int main(){
    UNITY_BEGIN();
     RUN_TEST(test_interest_1);
    RUN_TEST(test_interest_2);
     return UNITY_END();
}
void test_interest_2(void){
    TEST_ASSERT_EQUAL(780, interest_test(5000, 2, 7.8));
}
