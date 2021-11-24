#include "grocery_management_system.h"

/**
 * function to know the brandd about our products
 */

test_values brandname(int id)
{
    char name1[6];
    FILE *fp=NULL;
    fp = fopen("grocery.txt","rb");
    if(fp==NULL)
    {
         printf("\nError while opening file in issuing product\\n");
        return fail;
    }
    else{

    scanf("%19s company name",name1);
     product * product_to_find=( product*)malloc(sizeof( product));
    while(fread( product_to_find,sizeof( product),1,fp))
    {
        if( product_to_find-> product_id==id)
        {
            
            printf("\nProduct_Id: %d\t\tProduct_name: %s\t\tDescription: %s", product_to_find-> product_id, product_to_find-> product_name, product_to_find->description);
            printf("\n Product is issued to %s",name1);
            fclose(fp);
            free(product_to_find);
            return pass;
        }
    }
    
    fclose(fp);
    free( product_to_find);
    printf("\nSpecified product is not present\n");
    
    return fail;
    }
}
