void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_put_rec(s+1);
}
else
_putchar('\n');
}
