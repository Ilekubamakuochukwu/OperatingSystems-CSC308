#include <stdio.h>

int main (){
    char input_character;
    float input_float;
    int input_integer;
    int input;

    printf("Enter 1 to input a Character \nEnter 2 to input a Float value \nEnter 3 to input an integer ");
    scanf("%d", &input);

    switch (input)
    {
    case 1:
    printf("Enter the Character: ");
    scanf(" %c", &input_character);

    printf("The next 4 characters are: ");
            for (int i = 3; i <= 12; i += 3) {
                printf("%c ", input_character + i); 
            }
    printf("\n The ASCII code of %c is %d ", input_character,input_character);
    printf(" \nThe size of the character is %zu bytes", sizeof(input_character));

        break;

    case 2:
    printf("Enter the Float Value: ");
    scanf("%f", &input_float);

    printf("The next 4 float values are: ");
       for (int i = 3; i <= 12; i += 3) {
            printf("%.2f ", input_float + (i * 3.0f));
        }
    printf("\n");

     char float_str[20];
     sprintf(float_str, "%.2f", input_float);

     printf("ASCII codes for each digit in the float value:\n");
       for (int i = 0; float_str[i] != '\0'; i++) {
          printf("Character: %c, ASCII code: %d\n", float_str[i], float_str[i]);
        }
    printf("\nThe size of the float is %zu bytes\n", sizeof(input_float));
        break;

    case 3:
    printf("Enter the integer value: ");
    scanf("%d", &input_integer);

     printf("The next 4 integers are: ");
            for (int i = 3; i <= 12; i += 3) {
                printf("%d ", input_integer + i);
            }
            printf("\nThe ASCII code of %d is %d\n", input_integer, input_integer);
            printf("\nThe size of the integer is %zu bytes\n", sizeof(input_integer));
        break;
    
    default:
    printf("Invalid input.\n");
        break;
    }

    
}