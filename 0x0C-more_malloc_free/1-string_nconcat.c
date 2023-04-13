#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: argument
 * @s2: argument
 * @n: argument
 * Return: Something
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{       
        unsigned int i = 0, j = 0, k = 0, l = 0;
        char *str;
        
        if (s1 == NULL)
        return "";
        if (s2 == NULL)
        return "";
        while (s1[i])
        i++;    
        while (s2[j])
        j++;    
        if (n >= j)
        l = i + j;
        else
        l = i + n;
        str = malloc(sizeof(char) * l + 1);
        if (str == NULL)
        return (NULL);
        j = 0;
        while (k < l)
        {       
        if (k <= i)
        str[k] = s1[k];
        if (k >= i)
        {       
        str[k] = s2[j];
	j++;
	}
	k++;
	}
	str[k] = '\0';
	return (str);
}
