#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument
 * @av: argument
 * Return: Something
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, ch = 0;
	char *s;

	if (ac == 0 || av == NULL)
	return (NULL);
	while (i < ac)
	{
	while (av[i][j])
	{
	ch++;
	j++;
	}
	j = 0;
	i++;
	}
	s = malloc((sizeof(char) * ch) + ac + 1);
	i = 0;
	while (av[i])
	{
	while (av[i][j])
	{
	s[k] = av[i][j];
	k++;
	i++;
	}
	s[k] = '\n';
	j = 0;
	k++;
	i++;
	}
	k++;
	s[k] = '\0';
	return (s);
}
