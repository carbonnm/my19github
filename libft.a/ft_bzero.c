#include <string.h>
void *memset(void *b, int c, size_t len)
{
  char  *p;

  p = b;
  c = '\0';
  while (len-- > 0)
  {
    *p = (char)c;
    p++;
  }
  return (b);
}
