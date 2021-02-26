#include<interest.h>
#include<leapyear.h>








#include "unity.h"

#define PROJECT_NAME "Calculator"





void test_interest_1(void);
void test_interest_2(void);
void test_leapyear(void);


void setUp(){}

void tearDown(){}

int main(){
    UNITY_BEGIN();
     RUN_TEST(test_interest_1);
    RUN_TEST(test_interest_2);
    RUN_TEST(test_leapyear_1);
    RUN_TEST(test_leapyear_2);
     
     
     
     
     
     
     return UNITY_END();

}
void test_interest_1(void){
    TEST_ASSERT_EQUAL(2250, interest_test(10000, 3, 7.5));
}
void test_interest_2(void){
    TEST_ASSERT_EQUAL(780, interest_test(5000, 2, 7.8));
}

void test_leapyear_1(void){
    TEST_ASSERT_EQUAL(1,leapyear_test(2000));
    
}
void test_leapyear_2(void){
TEST_ASSERT_EQUAL(0,leapyear_test(2021));
}