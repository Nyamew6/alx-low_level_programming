#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _islower(int c)
{
  int i = 'a';

  for (i = 'a'; i <= 'z'; i++)
  {
    /* refer int c*/
    if (c == i)
    {
      return (1);
    }
  }
  return (0);
}
