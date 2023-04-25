#include <stdio.h>
/**
* void - prints alphabet in lowercase
* followed by a new line
* Return: 0 Always (Success)
*/
void print_alphabet(void);
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}


