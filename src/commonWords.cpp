/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>
#include <malloc.h>

#define SIZE 31

char ** commonWords(char *str1, char *str2) 
{
	char **ptr1 = NULL, **ptr2 = NULL, **ptr3 = NULL, *auxptr = NULL;
	int i = 0, j = 0, k = 0, w0 = 0, w1 = 1;

	if (str1 == NULL || str2 == NULL)
		return NULL;

	ptr1 = (char**)malloc(sizeof(char));
	ptr2 = (char**)malloc(sizeof(char));
	ptr3 = (char**)malloc(sizeof(char));

	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] != ' ')
			auxptr[k++] = str1[i];

		if (str1[i] == ' ' && (i - 1 >= 0 && str1[i - 1] != ' '))
		{
			k = 0;
			ptr1[w0++] = auxptr;
			auxptr = NULL;
		}
	}


}