
/**
 * _isalpha - returns 1 if c is a letter
 * @c: the character to check
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
