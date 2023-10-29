#include "main.h"
/**
 * _strstr - Main Entry
 * @haystack: The text
 * @needle: The text to search in the text
 * Return: Pointer to the first position of the searched text
*/
char *_strstr(char *haystack, char *needle)
{
	char *_haystack;
	char *_needle;

	while (*haystack != '\0')
	{
		_haystack = haystack;
		_needle = needle;

		while (*haystack != '\0' && *_needle != '\0' && *haystack == *_needle)
		{
			haystack++;
			_needle++;
		}
		if (!*_needle)
			return (_haystack);
		haystack = _haystack + 1;
	}
	return (0);
}
