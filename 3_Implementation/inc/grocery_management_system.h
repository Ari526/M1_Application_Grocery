/**
 * @file library_Managment_system.h
 * @author Aalla Sonika (aalla.sonika@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __GROCERY_MANAGEMENT_SYSTEM_H__
#define __GROCERY_MANAGEMENT_SYSTEM_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/**
 * @brief structure for Book Record
 * 
 */
typedef struct library
{
    int product_id;
    char product_name[20];
    char description[20];
}product;

/**
 * @brief return type for funtions for unit testing
 * 
 */

typedef enum test_values {
    pass = 1,
    fail = 0
}test_values;

/**
 * @brief function to find a book by its ID
 * @param id 
 * @return test_values 
 */
test_values searchproduct(int id);

/**
 * @brief function to add new books to the library
 * 
 * @return test_values 
 */
test_values addproduct(int id,char name[],char author[]);

/**
 * @brief funtion to denote discarded books
 * 
 * @param id 
 * @return test_values 
 */
test_values deleteproduct(int id);

/**
 * @brief function to view all the books
 * 
 * @return test_values 
 */
test_values brandname(int id);

/**
 * @brief function to issue the books
 * 
 * @return test_values 
 */
test_values viewproduct(void);

#endif

