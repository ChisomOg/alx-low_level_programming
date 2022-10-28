#include "main.h"
#include <stdio.h>

/**
 * cap_string - fuction that capitalize first character
 * @str: string to capitalize
 * Return: returns the capitalized string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}') && (s[i] >= 'a' && s[i] <= 'z'))
			str[i] -= 32;
		else if (( str[0] >= 97 && str[0] <= 122))
			str[0] -= 32;
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}
