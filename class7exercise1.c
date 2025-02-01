#include <stdio.h>
int main() {
    int vector1[3];
    int vector2[3];
    int result[3];

printf("Enter the values of the first vector: " );
scanf("%i", &vector1);
printf("Enter the values of the second vector: ");
scanf("%i", &vector2);

for (int i = 0; i < 3; i++) {
     result[i] = vector1[i] + vector2[i];
}




/*scanf("%i", &vector)
   printf("%p\n", name);

   for (int i=0; i < 5; i++){

       printf("%c\n", name[i]);

   }

   char *p2name = name ;
   puts(" ");

   for (int i=0; i < 5; i++){

       printf("%c\n", *p2name);
       p2name++;

   }*/
}