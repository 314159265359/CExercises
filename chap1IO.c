/* KnR Chap 1 IO

Program introduces input and output*/


#include<stdio.h>

main()
{

  int c;

  /*while ((c = getchar()) != EOF)
    putchar(c);*/

  /*combining Ex 1.6 and 1.7)*/

  printf("Press a key");
  printf("Value of C: %d\n",getchar() != EOF);
  printf("Value of EOF: %d\n", EOF);
 
  c = getchar();


}      
 

                      
  

