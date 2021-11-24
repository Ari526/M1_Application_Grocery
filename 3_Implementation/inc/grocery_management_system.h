/*
  * Preprocessor functions to decalre the header files
*/

#ifndef __GROCERY_MANAGEMENT_SYSTEM_H__
#define __GROCERY_MANAGEMENT_SYSTEM_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/**
 * structure for Products to store a values
 */
typedef struct library
{
    int product_id;
    char product_name[20];
    char description[20];
}product;

/**
 * 
   unit testing

 */

typedef enum test_values {
    pass = 1,
    fail = 0
}test_values;


/*
  Declare the functions to test the parametrs
*/
test_values searchproduct(int id);
/*
function to search products
*/


test_values addproduct(int id,char name[],char description[]);
/*
function to add products
*/


test_values deleteproduct(int id);
/*
function to delete products
*/


test_values brandname(int id);
/*
function to brand the products
*/


test_values viewproduct(void);
/**/

#endif
