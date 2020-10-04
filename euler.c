#include <stdio.h>

int problem1()
{
  // sum of multiples of 3 or 5 less than 1000
  int sum = 0;
  int i;

  for (i = 0; i < 1000; i += 3)
  {
    sum += i;
  }

  for (i = 0; i < 1000; i += 5)
  {
    sum += i;
  }

  for (i = 0; i < 1000; i += 15)
  {
    sum -= i;
  }

  return sum;
}

int problem5() {
  //finds least positive that is evenly divisible by all numbers from 1 to 20
  int i = 1;

  while (1)
  {
    int div = 0;
    int test;

    for (test = 1; test <= 20; test++)
    {
      div += i % test;
    }

    if (div == 0)
    {
      break;
    }

    i++;
  }

  return i;
}
