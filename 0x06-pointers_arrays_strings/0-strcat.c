#include "main.h"
#include <stdio.h>

/**
<<<<<<< HEAD
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
=======
* *_strcat - function that concatenates two strings
* @dest: character pointer variable
* @src: character pointer variable
* Return: pointer to the result sting dest
*/
char *_strcat(char *dest, char *src)
{
int i, j = 0;

for (i = 0;dest[i] != '\0'; i++)
;
while (src[j] != '\0')
{
dest[i + j] = src[j];
j++;
}

return (dest);
>>>>>>> 4e58e59c996542ce756515b756eb148e49c572ba
}

