/**
 * _strchr - function to locate a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to the first occurrence of the character c in the string s
 * or return NULL if the character is not found in the string
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
