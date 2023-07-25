/**
 * is_number - checks if a character is a number
 * @c: character to be evaluated
 * Return: 0 if no int is found, otherwise 1
 */
int is_number(char c)
{
	if (c >= '0' && c <= '9')
	{
		return 1;
	}
	return 0;
}

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integer value of string
 */
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int found = 0;
	while (*s)
	{
		if (is_number(*s))
		{
			found = 1;
			num = (num * 10) + (*s - '0');
		} else if (found) {
			break;
		} else if (*s == '-') {
			sign *= -1;	
		}
		s++;
	}
	return (num * sign);
}
