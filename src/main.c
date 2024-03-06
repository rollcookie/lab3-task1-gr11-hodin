/* hello.c */
#include <stdio.h>
#include <stdbool.h>

bool is_happy(int n)
{
  if (n > 999999 || n < 100000)
  {
    return false;
  }
  int sum = 0;
  while (n > 1000)
  {
    sum += n % 10;
    n /= 10;
  }

  while (n > 0)
  {
    sum -= n % 10;
    n /= 10;
  }

  return sum == 0;
}

void main (void)
{
  for(int i = 100000; i < 1000000; i++)
  {
    if(is_happy(i))
    {
      printf("%d\n", i);
    }
  }

}
