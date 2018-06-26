#include <stdio.h>
  int main ()
{
  int i, j, check, count, arraysize;
  check = 1;
  count = 0;
  arraysize = 1000000;
  int primes[arraysize];
  i = 2;
  while(count < arraysize)
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
     i++;
  }
     printf("%d is the %dth prime", primes[count-1], count);
}
