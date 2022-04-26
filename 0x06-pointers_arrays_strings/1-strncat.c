#include "main.h"

/**
<<<<<<< HEAD
 * *_strncat - function that concatenates two strings
 * using at most n bytes from src
 * @dest: character pointer variable
 * @src: character pointer variable
 * @n: integer variable
 * Return: pointer to dest variable
 *
 */
char *_strncat(char *dest, char *src, int n)
{
 int x, y = 0;

 for (x = 0; dest[x] != '\0'; x++)
 ;
 while (src[y] != '\0' && y < n)
 {
 dest[x + y] = src[y];
 y++;
 }
 return (dest);
=======
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
>>>>>>> 4e58e59c996542ce756515b756eb148e49c572ba
}
