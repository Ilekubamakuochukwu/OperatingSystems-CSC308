//Working on Arithmetic operators
#include <stdio.h>
int main(){
    int val1, val2, output;
    printf("Enter first value: " );
    scanf("%d", &val1);
    printf("Enter second value: " );
    scanf("%d", &val2);

    output = val1 + val2;
    printf("Value 1 + Value 2= %d \n", output);


    output = val1 - val2;
    printf("Value 1 - Value 2= %d \n", output);


    output = val1 * val2;
    printf("Value 1 * Value 2= %d \n", output);


    output = val1 / val2;
    printf("Value 1 / Value 2= %d \n", output);

    output = val1 % val2;
    printf("The value when 1  divided by value 2 = %d  \n", output);

    



}