int ft_isalpha(int c)
{
  if ((c >= 40 && c <= 90 ) || (c >= 97 && c <= 122))
    return (1);
  return (0);
}
