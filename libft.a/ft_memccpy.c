#include <string.h>
void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
  char  *dest;
  const char  *source;
  int i;

  dest = dst;
  source = src;
  i = 0;
  while (i < n)
  {
    dst[i] = src[i];
    if (dst[i] == (char)c)
      return (dst + i + 1);
    i++;
  }
  return (NULL);
}
