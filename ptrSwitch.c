#include<stdio.h>

main()

{
  int *a, *b, *c;
  int A, B;

  A = 12;
  B = 9;

  a=&A;
  b=&B;

  printf("%d %d\n", *a, *b);

  c=a;
  a=b;
  b=c;

  printf("%d %d\n",*a,*b);

}

