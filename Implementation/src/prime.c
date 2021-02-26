#include "prime.h"
int isprime(int operand1);
int prime(int operand1)
{
  int result = isprime(operand1);
  return result;
}

int isprime(int operand1)
{
	int i;
   for(i=2;i<operand1;i++)
  /* checks prime number */
  if(operand1%i== 0)
    break;
  /* Return 1 for prime number */
  if(i>operand1/2)
  return 1;
  else
  return -1;
}
