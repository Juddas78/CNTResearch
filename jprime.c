#include <stdio.h>

int
main ()
{
  int i, j, check, count, size, arraysize;
  check = 1;
  count = 0;
  size = 100000;
  arraysize = 10000;
  int primes[size];
  
  for (i = 2; i < size; i++)
  {
     j = 0;
     check = 1;
     while((j <= count) && check)
     {
         if(j == count)//reached the end of primes, therefore is prime
         {
            primes[count] = i;
            count++;
            check = 0;
         }
         else if((i % primes[j]) == 0)//can be divided evenly
         {
            check = 0; 
         }
         else 
         {
            j++;    
         }
     }
  }
      printf("%d is the %dth prime", primes[count-1], count);
}
