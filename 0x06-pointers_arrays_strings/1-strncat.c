#include "main.h"
#include <string.h>
/**
 *_strncat -> functions to append some charx
 *@dest: first param
 *@src: second param
 *@n: 3rd param
 *Return: return string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
