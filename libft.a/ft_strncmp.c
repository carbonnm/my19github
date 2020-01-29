#include <string.h>
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  int i;

  i = 0;
  while (i < n)
  {
    if (s1 < s2)
      return (-1);
    if (s1 > s2)
      return (1);
    i++;
  }
  return (0);
}
