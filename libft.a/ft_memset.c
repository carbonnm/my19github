#include <string.h>
void *ft_memset(void *b, int c, size_t len)
{
  char  *p;

  p = b;
  while (len-- > 0)
  {
    *p = (char)c;
    p++;
  }
  return (b);
}
