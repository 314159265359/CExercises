/* KnR Fahrenheit to Celsius

formula: C = (5/9)(F-32)

Program introduces #define and symbolic constants*/


#include<stdio.h>

#define LOWER 0 
#define UPPER 300
#define STEP 20

main()
{
 
  int fahr;  
  
  printf("Fahr  Celsius\n");

  for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

}      
 

                      
  

