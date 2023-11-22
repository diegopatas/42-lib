#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	char *str;

	str = ft_itoa(7);
	ft_putstr_fd(str, 1);
	free(str);
	return (0);
}
