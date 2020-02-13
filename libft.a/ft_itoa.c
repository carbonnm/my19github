#include "libft.h"
char  ft_itao(int n)
{
  int   i;
  int   mod;
  char  *str;

  i = 1;
  mod = n < 0;
  while (n /=10)
    i++;
  if (!(str = malloc(i + 1 + mod) * sizeof(char)))
    return (NULL);
  if (mod)
    *str++ = '-';
  str += i;
  if (n == 0)
    *str-- = '0';
  while (n)
  {
    *str-- = (n % 10) * (mod ? -1 : 1) + '0';
    n /= 10;
  }
  return (str + 1 - mod);;
}
