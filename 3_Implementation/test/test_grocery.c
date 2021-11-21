#include "unity.h"
#include "grocery.h"

/* Modify these two lines according to the project */
#include "grocery.h"
#define PROJECT_NAME    "Grocery Store"

/* Prototypes for all the test functions */
void add_stocks();
void departmentbill();
void cal_bill() ;
void modify();
void edit_stocks();


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(add_stocks);
  RUN_TEST(departmentbill);
  RUN_TEST(call_bill);
  RUN_TEST(modify);
  RUN_TEST(edit_stocks);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void add_stocks() {
  TEST_ASSERT_EQUAL(rice,20);
 
}
void departmentbill() {
 
  /* Dummy fail*/
  
}
void callbill() {
  TEST_ASSERT_EQUAL(10,25,30));
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(10,25,30);
}

void modify() {
  TEST_ASSERT_EQUAL(dhal,5);
  
  /* Dummy fail*/
  // TEST_ASSERT_EQUAL(dhal,5);
}

void edit_stocks() {
  TEST_ASSERT_EQUAL(rice,2);
  
  
  // TEST_ASSERT_EQUAL(rice,2);
}
