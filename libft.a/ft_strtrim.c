#include "libft.h"
char  *ft_strtrim(char const *s1, char const *set)
{
  size_t debut;
  size_t fin;
  char  *nouveau;

  debut = 0;
  if (!s1 || !set)
    return (NULL);
  while (s1[debut] && ft_strchr(set, s1[debut]))
    debut++;
  fin = ft_strlen(s1 + debut);
  if (fin)
    while (s1[fin + debut - 1] != 0 && ft_strchr(set, s1[fin + debut - 1] != 0))
      fin--;
  if (!(nouveau = malloc(sizeof(char) * fin + 1)))
    return (NULL);
  ft_strncpy(new, s1 + debut, fin);
  nouveau[fin] = '\0';
  return (nouveau);
}
