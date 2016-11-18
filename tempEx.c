/*KnR 1.2 Fahrenheit to Celsius

formula: C = (5/9)(F-32)

Program introduces comments, declarations, variables, arithmetic expressions, loops, and formatted output

*/


#include<stdio.h>

main()
{
 
  float fahr, celsius;  //variable declarations
  int lower, upper, step;

  lower=0;           //assignment statements
  upper=300;
  step=20;

  fahr=lower; 

    
  printf("Fahr  Celsius\n"); //print header KnR 1.3

                      
  while (fahr <= upper) {   //arithmetic, prints rows while condition true 
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %7.1f\n", fahr, celsius);
    fahr = fahr +step;
  }

  /*KnR 1.4 Celsius to Fahrenheit
    formula: C = (5/9)(F-32) , F = (9/5)C + 32 */

  lower=0;           
  upper=300;
  step=20;

  fahr=lower; 

    
  printf("\n\tCelsius \tFahr\n"); //print header KnR 1.4

                      
  while (fahr <= upper) {   
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("\t%3.1f  \t%12.0f\n", celsius, fahr);
    fahr = fahr +step;
  }  
  
   printf("Fahr  Celsius\n"); //switch from while to for loop  
     
   int fahr2;
        
   for (fahr2 = 0; fahr2 <= 300; fahr2 = fahr2 + 20) 
     printf("%d %6.1f\n", fahr2, (5.0/9.0)*(fahr2 - 32));
    
   /*KnR 1.5 Print temps in reverse order*/

   printf("\nFahr  Celsius\n");
   for (fahr2 = 300; fahr2 >=0; fahr2 = fahr2 - 20) 
     printf("%d %6.1f\n", fahr2, (5.0/9.0)*(fahr2 - 32));

  

} 




