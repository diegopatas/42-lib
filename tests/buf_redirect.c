#include "tester.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void	fd_close(int pipedes[]) {
	close(pipedes[READ_EDGE]);
	close(pipedes[WRITE_EDGE]);
	return;
}
// static	void	run(char *str, size_t len) {
// 	// write(STDOUT_FILENO, &str[0], len);
// 	ft_putstr_fd(str, STDOUT_FILENO);
// 	return;
// }
char	*fn_wrapper(char *str, void (*fn)())
{
	char	*buf;
	size_t	len; 
	int	pid;
	int	pipedes[2];

	len = ft_strlen(str);
	buf = NULL;
	buf = (char *)malloc(sizeof(len + 1));
	ft_strlcpy(buf, str, len);
	buf[len] = '\0';
	pipe(pipedes);
	pid = fork();
	if (pid == 0) {
		dup2(pipedes[WRITE_EDGE], STDOUT_FILENO);
		fd_close(pipedes);
		fn(str, STDOUT_FILENO);
	}
	waitpid(pid, NULL, 0);
	read(pipedes[READ_EDGE], buf, len);
	fd_close(pipedes);
	return (buf);
}
