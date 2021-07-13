#include <stdlib.h>
#include "holberton.h"

/**
 * strtow - splits str by whitespaces
 * @str: string to split
 *
 * Return: an array of the splitted string
 */
char **strtow(char *str)
{
	int len = 0, words_len = 0;
	char **words, **words_tmp, *buf, s, *str_tmp = str;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; (s = str[len]); ++len)
		(words_len += (!len && str[0] != ' ') ||
		 (s == ' ' && (str[len + 1] != ' ' && str[len + 1])));
	words = malloc(sizeof(char *) * (words_len + 1)), words_tmp = words;
	buf = malloc(sizeof(char) * (len + words_len + 1));
	if (words == NULL || buf == NULL)
		return (free(words), free(buf), NULL);
	for (*words++ = buf; (s = *str); ++str)
	{
		if (s == ' ')
			if (str[1] == ' ' || str == str_tmp || !str[1] || words[-1] == buf)
				continue;
			else
				(*buf++ = '\0'), *words++ = buf;
		else
			*buf++ = s;
	}
	*buf = '\0', *words = NULL;
	return (words_tmp);
}
