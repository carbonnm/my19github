#include <string.h>
void *ft_memcpy(void *dst, const void *src, size_t n)
{
  char  *dest;
  const char  *source:
  int   i;

  dest = dst;
  source = src;
  i = 0;
  if ((src == NULL) || (dst == NULL))
    return (NULL)
  while (i < n)
  {
    dest[i] = src[i];
    i++;
  }
  return (dst);
}
