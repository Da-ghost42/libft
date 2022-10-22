
#include"libft.h"

char *ft_substr(char *s,unsigned int start,size_t len)
{
    size_t i;
    size_t j;
    char *p;

    i = 0;
    j = 0;
    
    if(len < start)
      return NULL;
    if(len > ft_strlen(s))
      len = ft_strlen(s);
      
    p = (char *)malloc(sizeof(char) * (len - start + 1));
    if(!*s)
        return NULL;
    while(s[i])
    {
      if(i >= start && j < len)
        {
          p[j] = s[i];
          j++;
        }
        i++;
    }
    p[j] = '\0';
return (p);

}
// int main()
// {
//     char t[] = "abcdefg";
//     printf("%s",ft_substr(t,10,9));
// }