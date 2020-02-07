#include < string.h>
char  *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (haystack[i] != '\0' && needle[j] != '\0')
  {
    while (haystack[len] > 0)
    {
      if (haystack[i] != needle[j])
        i++;
      len--;
    }
  }
}
