#include <stdio.h>

int main(){
    int age;
    int experience;

    printf("How old are you: ");
    scanf("%d", &age);
    printf("How many years of experience do you have: ");
    scanf("%d", &experience);

    if (experience > 0 && age >= 40){
        printf("Your Salary is N560,000");
    }
    else if (experience > 0 && age  >= 30 && age < 40 )
    {
        printf(" Your Salary is N480,000");
    }
    else if (experience > 0 && age < 28)
    {
       printf("Your Salary is N300,000");
    }
    else if (experience == 0)
    {
        printf("Your Salary is N100,000");
    }
    
    else{
        printf("Sorry! You are not eligible");
    }
    
    
    
}