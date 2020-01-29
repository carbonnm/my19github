#include <string.h>
char  *ft_strrchr(const char *s, int c)
{
  int i;

  i = ft_strlen();
  while(i-- > 0)
  {
    if (s[i] == c)
      return (s[i]);
  }
  return (NULL);
}
