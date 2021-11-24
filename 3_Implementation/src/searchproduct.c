#include "grocery_management_system.h"

/**
 * function to  find the Product
 */

test_values searchproduct(int id)
{
    
    FILE *fp=NULL; // using pointer to store the values
    fp = fopen("grocery.txt","rb");
    if(fp==NULL)
    {
        printf("\nError while opening file in search area\n");
        return fail;
    }
    else{
    
     product * product_to_find=( product*)malloc(sizeof( product)); // memory allocation for the products
    while(fread( product_to_find,sizeof( product),1,fp))
    {
        if( product_to_find-> product_id==id)
        {
            
            printf("\nProduct_Id: %d\t\tProduct_name: %s\t\tDescription: %s",product_to_find->product_id,product_to_find->product_name,product_to_find->description);
            fclose(fp);
            free(product_to_find);
            return pass;
        }
    }
    
    fclose(fp);
    free(product_to_find);
    printf("\nSpecified Product is not present\n");
    
    return fail;
    }
}
