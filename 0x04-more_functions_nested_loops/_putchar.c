#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and error 0 is set appropriately.
*/
int _putchar(char c)
{
<<<<<<< HEAD
return (write(1, &c, 1));
=======
	return (write(1, &c, 1));
>>>>>>> 56eb01f9f57e0fd8ce74ccbac731d9966c20de11
}
