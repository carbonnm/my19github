#include <string.h>
int memcmp(const void *s1, const void *s2, size_t n)
{
  char  str1;
  char  str2;
  int i;

  str1 = s1;
  str2 = s2;
  i = 0;
  while (i < n)
  {
    if (str1[i] < str2[i])
      return (-1);
    if (str1[i] > str2[i])
      return (1);
    i++;
  }
  return (0);
}
