#include "main.h"

void swap(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

int _strlen(char *s)
{
	int length = 0;

	while(*s)
	{
		length++;
		s++;
	}

	return (length);
}

void rev_string(char *s)
{
	int s_length = _strlen(s), i;

	for (i = 0; i < s_length/2; i++)
	{
		swap(&s[i], &s[s_length-i-1]);
	}
}
