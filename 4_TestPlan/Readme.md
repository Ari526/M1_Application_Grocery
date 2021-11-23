# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |ADD Product in the Software| Biscuit|Sucessfull|Succesfull|Requirement based |
|  H_02       |VIEW Product in the Software  Added in the add items|Sucessfull|Sucessfull|Scenario based    |
|  H_03       |DELETE Product in the Software Deleted the products in the records|Records empty|Records empty|Sucessfull|Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Basic operation Fopen| genearte a txt file to open the records|txt file|Sucessfull|Requirement based |
|  L_02       |Struct used to store the products details|  Struct Product|Sucessfull|Sucessfull|Scenario based    |
|  L_03       |Str cpy and pointers|  To get a paramters to pass the values|Strcpy|Sucessfull|Sucessfull|Boundary based    |
