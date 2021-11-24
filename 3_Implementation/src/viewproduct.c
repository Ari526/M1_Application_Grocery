#include "grocery_management_system.h"

/**
 * @ function to view the product
 * 
 */

test_values viewproduct()
{
    /**
     * @ file operation to open close read and write the files
     * 
     */
    FILE *fp=NULL; // using pointer to store the values
    fp=fopen("grocery.txt","rb");
   
    if(fp==NULL)
    {
        printf("\nERROR:\n");
        return fail;
    }
    else{
        product *product_to_find=( product*)malloc(sizeof( product)); // memory allocation for the products
    while(fread(product_to_find,sizeof(product),1,fp)==1)
    {
        printf("\n%d\t\t\t%s\t\t\t%s",product_to_find->product_id,product_to_find->product_name,product_to_find->description);
    }
    fclose(fp);
    free(product_to_find);
    
    return pass;
    }
}
