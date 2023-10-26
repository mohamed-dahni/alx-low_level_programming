#include "main.h"

int is_binary(const char *b)
{
	int i;
	unsigned int b_len = _strlen(b);

	if (b == NULL)
		return (0);

	for (i=0; i<b_len; i++)
	{
		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
	}

	return (1);
}

unsigned int _strlen(const char *s)
{
	unsigned int count = 0;
    while(*s!='\0')
    {
		count++;
        s++;
    }
    return count;
}
