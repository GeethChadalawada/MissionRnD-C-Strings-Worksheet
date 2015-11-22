/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/
#include<stdio.h>

char removeSpaces(char *str) 
{
	int i = 0, j = 0;

	if (str == '\0' || str == NULL)
		return '\0';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			for (j = i; str[j] != '\0'; j++)
				str[j] = str[j + 1];

			str[j] = '\0';
		}
	}
	return *str;
}