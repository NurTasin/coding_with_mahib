/*
Basic Function Syntax and Concepts

C is a strongly typed language
every variable has to be defined of a certain type

Basic Structure of a function
RETURN_TYPE FUNCTION_NAME(PARAMETERS){
    BODY...
    RETURN STATEMENT;
}

Math er function
f(x)=x^2+5
g(x,y,z)=10x+5y+69z

#### HW ####
     | -1 if x>0
h(x)=| 0 if x=0
     | 1 if x<0


void data type in C/C++
void is a data type that means the function will return nothing
this type of function is also known as proccedure

*/
#include <stdio.h>

double f(double x){
    return (x*x)+5;
}

double g(double x, double y, double z){
    return 10*x+5*y+69*z;
}

void displayName(char* string){
    printf("***************************\n");
    printf("############ %s ##########\n", string);
    printf("***************************\n");
}



int main(){
    // double inp;
    // scanf("%lf", &inp);
    // printf("f(%lf)=%lf\n", inp, f(inp));
    // printf("g(%lf)=%lf\n", inp, g(inp, inp, inp));

    char name[10];
    scanf("%s", name);
    displayName(name);

    return 0;
}