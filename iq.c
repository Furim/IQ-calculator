#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
   
   int i;
   
   int n = 1;
   
   time_t t;
   
   char input_string[10];

   char input_string_2nd[10];

   printf("Who painted mona lisa\n");
   
   
   scanf("%s", input_string);
   

   printf("What 0 / 0 equals to?\n");


   scanf("%s", input_string_2nd);



   srand((unsigned) time(&t));


   for( i = 0 ; i < n ; i++ ) {
      printf("Your iq is: %d\n", rand() % 100000);
   }
   return(0);
}
