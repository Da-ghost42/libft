
#include"libft.h"

// char *ft_substr(char *s,unsigned int start,size_t len)
// {
//     size_t i;
//     size_t j;
//     char *p;

//     i = 0;
//     j = 0;
//     // start = 0;
//     if(!*s)
//         return 0;
		
//     if(len < start)
//       return NULL;
//     if(len > ft_strlen(s))
//       len = ft_strlen(s);
			
//     p = (char *)malloc(sizeof(char) * (len - start +));
//     if (!p)
//       return 0;
//     while(s[i])
//     {
//       if(i >= start && j < len)
//         {
//           p[j] = s[i];
//           j++;
//         }
//         i++;
//     }
//     p[j] = '\0';
// return (p);
#include "libft.h"

char  *ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return 0;
	if(len > strlen(s))
		len = strlen(s);
	str = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

// }
// int main()
// {
//     char t[] = "abcdefg";
//     printf("%s",ft_substr(t,10,9));
// }