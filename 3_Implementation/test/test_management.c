#include "grocery_management_system.h"
#include "unity_internals.h"
#include "unity.h"
#include "unity.c"
#include "addproduct.c"
#include "deleteproduct.c"
#include "brandname.c"
#include "searchproduct.c"
#include "viewproduct.c"

void setUp(){}

void tearDown(){}


void test_addproduct(void){
    TEST_ASSERT_EQUAL(pass,addproduct(25, "RICE", "SMALL PACKET"));
}

void test_viewproduct(void){
    TEST_ASSERT_EQUAL(pass,viewproduct());
}

void test_searchproduct(void){
    TEST_ASSERT_EQUAL(fail,searchproduct(-1));
    TEST_ASSERT_EQUAL(pass,searchproduct(25));
}



void test_deleteproduct(void){
    TEST_ASSERT_EQUAL(pass,deleteproduct(25));
}        

void test_brandname(void){
    TEST_ASSERT_EQUAL(pass,brandname(25));
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_addproduct);
    RUN_TEST(test_searchproduct);
    RUN_TEST(test_brandname);
    RUN_TEST(test_deleteproduct);
    RUN_TEST(test_viewproduct);
    
    return UNITY_END();
}
