#include <stdio.h>
/**
 * main - print string
 * Description: don't use printf or puts
 * Return: 1
 */
int main(void)
{
	char [] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	long l = 59;
	long fd = 1;
	long syscall = 1;
	long ret = 0;

	__asm__ ("syscall"
	: "=a" (ret)
	: "a" (syscall),
	"D" (fd),
	"S" (s),
	"d" (1));
	return (1);
}
