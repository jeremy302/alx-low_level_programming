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
	int len = 0, words_len = 0, ns = 0, block_len, old_len;
	char **words, **words_tmp, *buf, s, *str_tmp = str, *buf_tmp;
	void *block;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (; (s = str[len]); len++)
		(words_len += (!len && str[0] != ' ') ||
		 (s == ' ' && (str[len + 1] != ' ' && str[len + 1]))),
			ns += s == ' ';
	if (words_len == 0)
		return (NULL);
	block_len = (sizeof(char *) * (words_len + 1)) +
		(sizeof(char) * (len + words_len - ns));
	block = malloc(block_len);
	old_len = (sizeof(char *) * (words_len + 1)) +
		(sizeof(char) * (len + words_len + 1));
	if (block == NULL)
		return (NULL);
	words = block, words_tmp = words;
	buf = (char *)(words + words_len + 1), buf_tmp = buf;
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
	(*buf = '\0'), *words = NULL;
	(void) buf_tmp,	(void) old_len;
	return (words_tmp);
}
