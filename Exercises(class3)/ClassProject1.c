#include <stdio.h>
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

if (age >= 18){
    printf("You can vote");
}
else{
    printf("You can not vote");
}
}

int main(){
    int score1, score2, score3;
    int total;
    int average;
    float percentage;
    int maxscore;

    printf("Enter CSC 201 score :");
    scanf("%d",&score1);
    printf("Enter CSC205 score: ");
    scanf("%d",&score2);
    printf("Enter STA 205 score: ");
    scanf("%d", &score3);
     
    maxscore = 100;
    total = score1 + score2 + score3;
    average = (score1+score2+score3)/ 3;
    percentage = ((float)total / (maxscore*3)) * 100 ;


    printf("The total score is %d \n",total );
    printf("The average is %d \n", average);
    printf("The percentage is  %.2f%%  \n", percentage);

    
}

int main(){
    char letter;
    printf("Enter a character between A and J: ");
    scanf("%c", &letter);

    if (letter >= 'A' && letter <= 'J' ){
        for ( int i=1; i<=6; i++){
            printf("%c", letter + i);
        }
        }
    else {
            printf("Invalid input! Please enter avalue between A and J");

    }
}
