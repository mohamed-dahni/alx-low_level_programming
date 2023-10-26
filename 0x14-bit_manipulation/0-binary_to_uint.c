
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0,
		b_len = _strlen(b);
	int i, field = 1;

	if (!is_binary(b))
		return (0);

	for (i=0; i<b_len; i++)
	{
		result = (b[i] == '1') ? field *= i+1: result;	
	}

	return (result);
}
