#include "interest.h"
#include "leapyear.h"
#include "prime.h"
#include "average.h"
#include "unity.h"

#define PROJECT_NAME "Calculator"





void test_interest_1(void);
void test_interest_2(void);
void test_leapyear(void);
void test_prime(void);
void test_average(void);


void setUp(){}

void tearDown(){}
void test_interest_1(void){
    TEST_ASSERT_EQUAL(2250, interest(10000, 3, 7.5));
}
void test_interest_2(void){
    TEST_ASSERT_EQUAL(780, interest(5000, 2, 7.8));
}

void test_leapyear_1(void){
    TEST_ASSERT_EQUAL(1,leapyear(2000));    
}
void test_leapyear_2(void){
TEST_ASSERT_EQUAL(0,leapyear(2021));
}
void test_prime_1(void){
TEST_ASSERT_EQUAL(1,prime(5));
}

void test_prime_2(void){
TEST_ASSERT_EQUAL(-1,prime(6));
}

void test_average(void){
    int a[5]={5,6,5,3,2};
    TEST_ASSERT_EQUAL(4.2,average_final(5,3.4));
}

int main(){
    UNITY_BEGIN();
     RUN_TEST(test_interest_1);
    RUN_TEST(test_interest_2);
    RUN_TEST(test_leapyear_1);
    RUN_TEST(test_leapyear_2);
    RUN_TEST(test_prime_1);
     RUN_TEST(test_prime_2);
     //RUN_TEST(test_average);     
     return UNITY_END();

}

















