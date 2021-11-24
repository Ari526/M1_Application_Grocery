#include "grocery_management_system.h"

/**
 * @ function to delete the product
 * 
 */

test_values deleteproduct(int id)
{
     /**
     * @ file operation to open close read and write the files
     * 
     */
    
    
    FILE *fp=NULL;
    FILE *ft=NULL; // using pointer to store the values
    fp = fopen("grocery.txt","rb");
    ft = fopen("temp.dat","wb");
    
    if(fp==NULL || ft==NULL)
        {
             printf("\nError: While opening file:\n");
            return fail;
        }
    else{
        rewind(fp);
        
        product *discarded_product = ( product*)malloc(sizeof(product));  // memory allocation for the products
    while(fread(discarded_product,sizeof(product),1,fp)==1)
    {
        if(id != discarded_product-> product_id)
        {
            
            fwrite(discarded_product,sizeof( product),1,ft);
            
            
        }
        
        
        

    }
    fclose(fp);
    fclose(ft);
    free(discarded_product);
  
   remove("grocery.txt");
    rename("temp.dat","grocery.txt");
    
    return pass;
    
    
        }

}
