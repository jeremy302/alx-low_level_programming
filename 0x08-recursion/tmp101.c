#include "holberton.h"

void printe(const char *format, char *s1, char *s2)
{
//	printf(format, s1, s2);
}
void filter_doubles(char *str, char *out)
{

}
/**
 * wildcmp - checks if s1 and s2 are similar, using any '*' in s as a wild card
 * @s1: a string
 * @s2: a string, possibly containing '*' wild card
 *
 * Return: 1 if s1 and s2 match, else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		 printe("first if at: |%s|%s|\n",s1,s2);
		if (!*s1)
			return wildcmp(s1, s2 + 1);
		if(*(s2+1) == '*')
		   return wildcmp(s1, s2 + 1);
		if (wildcmp(s1, s2 + 1))
		{
			 printe("passed at: |%s|%s|\n",s1,s2); 
			return (wildcmp(s1 + 1, s2 + 2));
		}
		else
		{
			 printe("else at: |%s|%s|\n",s1,s2); 
			return (wildcmp(s1 + 1, s2));
		}
	}
	else if (!*s2)
	{
		 printe("else if at: |%s|%s|\n",s1,s2); 
		return (*s1 == '\0');
	}
	else
	{
		 printe("last else at: |%s|%s|\n",s1,s2); 
		return (*s1 == *s2 && wildcmp(s1 + 1, s2 + 1));
	}

}
