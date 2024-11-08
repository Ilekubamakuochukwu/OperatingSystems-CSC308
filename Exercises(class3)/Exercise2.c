#include <stdio.h>

int main()
{
    int first_int, second_int;
    float first_float, second_float;
    printf("Enter first integer value: ");
    scanf("%d", &first_int);
    printf("Enter second integer value: ");
    scanf("%d", &second_int);
    printf("Enter first float value: ");
    scanf("%f", &first_float);
    printf("Enter second float value: ");
    scanf("%f", &second_float);


    printf(" ++first integer = %d \n", ++first_int);
    printf("--Second integer = %d \n", --second_int);
    printf("++First float = %f\n", ++first_float);
    printf("--Second float = %f\n", --second_float);

    return 0;

}