#include "_putchar"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
nt main(void)
{
	char *sh = "_putchar";
while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}  