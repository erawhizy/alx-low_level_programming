#include "main.h"
#include <string.h>
/**
 *_strncpy -> for copying
 *@dest: param1
 *@src: param2
 *@n: param3
 *return: return string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
