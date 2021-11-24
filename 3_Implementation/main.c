/**
 * @file main.c
 */

#include "grocery_management_system.h"
#include "addproduct.c"
#include "deleteproduct.c"
#include "brandname.c"
#include "searchproduct.c"
#include "viewproduct.c"


/**
 * @brief main function of the project
 * 
 * @return int 
 */

int main()
{
    
    int id,choice,result; 
    
    char product_name[20],description[20];
    
    printf("\n\t\t\t\t\t\t*****************Welcome to Grocery Shop *************************\n");
    printf("\n\t\t\t\t\t\t*************** MAIN MENU ***************\n");
    printf("\n\t\t\t\t\t\t1. Add Products");
    printf("\n\t\t\t\t\t\t2. Delete Products");
    printf("\n\t\t\t\t\t\t3. View Products");
    printf("\n\t\t\t\t\t\t4. Search Products");
    printf("\n\t\t\t\t\t\t5. Brand name");
    printf("\n\t\t\t\t\t\t6. Close Application");
    printf("\n\t\t\t\t\t\t******************************************\n");
    printf("\n\t\t\t\t\t\tEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\nProduct Id: ");
        scanf("%d",&id);
        fflush(stdin);
        printf("\nProduct name:");
        //gets(name);
	scanf("%19s",product_name);
       printf("Description: ");
        fflush(stdin);
        //gets(details);
	scanf("%19s",description);
        result=addproduct(id,product_name,description);
        break;
        case 2:
        printf("\nProductId: ");
        scanf("%d",&id);
        result=deleteproduct(id);
        break;
        case 3:
        result=viewproduct();
        break;
        case 4:
        printf("\nProductId:");
        scanf("%d",&id);
        result=searchproduct(id);
        break;
        case 5:
        printf("\nProductId: ");
        scanf("%d",&id);
        result=brandname(id);
        break;
        case 6:
        printf("\n\n\n");
        exit(1);
        default:
        printf("\n\t\t\t\t\t\tInvalid input");
        break;
     }
    if(result == pass)
    {
        printf("Successful\n");
        printf("\t\t\t\t\t Thank You For Using This System\t\t\t\t\t\t\n");
        printf("\t\t\t\t\t Vist Again Have a nice day \t\t\t\t\t\t\n");
    }
    else if(result==fail)
    {
        printf("Unsuccessful\n");
    }
    else{
        printf("Error\n");
    }
    
return 0;
}
