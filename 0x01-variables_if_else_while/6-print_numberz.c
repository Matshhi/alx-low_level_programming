#include <stdio.h>
/**
* main - prints numbers of base 10
* Return: 0 (Success)
*/
int main(void)
{
int a;

for (a = 0; a < 10; a++)
putchar((a % 10) + '0');

putchar('\n');

return (0);
}
