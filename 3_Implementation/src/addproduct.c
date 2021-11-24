#include "grocery_management_system.h"

/**
 * function to add new products in record
 */

test_values addproduct(int id,char product_name[],char description[])
{
    
    
    
    FILE *fp=NULL; // using pointer to store the values
    fp=fopen("grocery.txt","rb");
    
    if(fp == NULL)
    {
        printf("\nError: while opening file\n");
        return fail;
    }
    else{
        
        product *newProduct = NULL;
        newProduct = malloc(sizeof(product));  // memory allocation for the products
		
        newProduct->product_id = id;
        strcpy(newProduct->product_name,product_name);
        
    

    strcpy(newProduct->description,description);
    
    fwrite(newProduct,sizeof(product),1,fp);
    fclose(fp);
    free(newProduct);
    
    
    return pass;
    } 

}
