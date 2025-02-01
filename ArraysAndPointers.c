#include <stdio.h>
int main(){
    int rowMatrix[5]= {4,5,7,8,8};
    int newArray[5];
    int matrix[3][2] = {
        {3,8},
        {2,0},
        {5,2}};
    printf("%d \n", rowMatrix[2]);
    printf("%d\n", matrix[1][1]);

    for(int i=0; i<5; i++){
        printf("%i\n", rowMatrix[i]);
    }
    printf(" Elements of 3dimensional array \n");

    for (int i=0; i<3; ++i){
        for(int j=0; j<2; ++j){
            printf("%d \n ", matrix[i][j]);
        }
    }

    printf("Pointers");

    int *age;

    int x =10;
    int *ptr = &x;


    return 0;
}