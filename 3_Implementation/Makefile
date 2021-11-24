# Name Of the Project
PROJECT_NAME = Grocery

#All Source code file
SRC = main.c\
src/addproduct.c\
src/deleteproduct.c\
src/brandname.c\
src/searchproduct.c\
src/viewproduct.c

TEST_SRC = src/addproduct.c\
src/deleteproduct.c\
src/brandname.c\
src/searchproduct.c\
src/viewproduct.c\
unity/unity.c\
test/test_management.c

#Path to the header file
INC_HEADER = inc
INC_TEST = unity

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

TEST_OUTPUT = Test_$(PROJECT_NAME).$(EXEC)

all:
	gcc -I $(INC_HEADER) $(SRC) -o $(call FixPath, ./$(PROJECT_NAME).$(EXEC))

run: all
	$(call FixPath, ./$(PROJECT_NAME).$(EXEC))

test:
	gcc -I $(INC_HEADER) -I $(INC_TEST) $(TEST_SRC) -o $(call FixPath, ./$(TEST_OUTPUT))
	$(call FixPath, ./$(TEST_OUTPUT))
	


cppcheck:
	cppcheck --enable=all -I $(INC_HEADER) $(SRC)



