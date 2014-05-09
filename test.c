#include <stdio.h>
#include <sys/syscall.h>
#include <linux/kernel.h>
#include <unistd.h>
#define __NR_hello 337
long hello_syscall(void)
{
	return syscall(__NR_hello);
}
int main(int arc, char* argv[])
{
	long int a = hello_syscall();
	printf("System call return %ld\n", a);
	return 0;
}
