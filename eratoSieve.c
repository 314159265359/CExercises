/* Eratosthenes Sieve - sorts out prime numbers - Mark Burgess */

#include<stdio.h>

#define SIZE 5000
#define DELETED 0

/* Level 0 */

main()

{ short sieve[SIZE];

  printf ("Eratosthenes Sieve \n\n");

  FillSieve(sieve);
  SortPrimes(sieve);
  PrintPrimes(sieve);
}

/* Level 1 */

FillSieve (sieve)

short sieve[SIZE];


{  
  short i;  
   
  for (i=2; i < SIZE; i++)
    {
      sieve[i] = i;
    }
}


SortPrimes (sieve)

  short sieve[SIZE];

{
  short i;

  for (i=2; i < SIZE; i++)
    {
      if (sieve[i] == DELETED)
        {
	  continue;
	}
      DeleteMultiplesOf(i, sieve);
    }
}

PrintPrimes(sieve)

  short sieve[SIZE];

 { short i;

   for (i=2; i < SIZE; i ++)
     {
       if (sieve[i] == DELETED)
	 {
	   continue;
	 }
       else
	 {
           printf("%5d\n", sieve[i]);
	 }
     }
 }

 /* Level 2 */

 DeleteMultiplesOf (i, sieve)

   short i; 
   short sieve[SIZE]; 

 { short j, mult = 2;

   for (j = i*2; j < SIZE; j = i * (mult++))
     {
       sieve[j] = DELETED;
     }
 }

  



