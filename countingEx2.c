/* KnR Chap 1 Counting

Program introduces ASCII and counting*/


#include<stdio.h>

main()
{

  int c, n1;

  n1 = 0;
  

  while ((c=getchar()) != EOF)
    if (c == '\n')
      ++n1;
  
  printf("Number of lines: %d\n", n1);
 

}      
 

                      
  

