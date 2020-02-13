#include "libft.h"
char  ft_strjoin(char const *s1, char const *s2)
{
  int   i;
  int   j;
  char  *str;

  i = 0;
  j = 0;
  i = ft_strlen(s1) + ft_strlen(s2) + 1;
  if (!(str = (char *)malloc(sizeof(char) * i)))
    return (NULL);
  if (s1)
    while(s1[j])
      {
        str[i++] = s1[j++];
      }
  j = 0;
  if (s2)
    while (s2[j])
      str[i++] = s2[j++];
  str[i] = '\0';
  return (str);
}
