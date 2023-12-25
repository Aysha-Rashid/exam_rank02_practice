#include<stddef.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j;
    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if(s[i] == reject[j])
                return(i);
            j++;
        }
        i++;
    }
    return (i);
}

#include <string.h>
#include <stdio.h>

int main()
{
	printf("%lu\n", ft_strcspn("hjflolo", "iplell"));
	printf("%lu\n", strcspn("hjflolo", "iplell"));
}