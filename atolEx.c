#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main()
{
  char *str=NULL;
  long value=0;

  str="     -2309";
  value = atol(str);
  printf("Function: atol(%s)=%ld\n",str, value);

  str="314127.64";
  value = atol(str);
  printf("Function: atol(%s)=%ld\n",str, value);

  str="3336402735171707160320";
  value = atol(str);
  printf("Function: atol(%s)=%ld\n",str, value);

  if(errno==ERANGE)
    {
      printf("Overflow condition occurred.\n");
    }
   
  return 0;

}



