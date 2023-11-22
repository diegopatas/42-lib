#include "./Unity/src/unity.h"
#include "./Unity/extras/fixture/src/unity_fixture.h"
#include "./Unity/extras/memory/src/unity_memory.h"
#include "../libft.h"
#include <stddef.h>
#include <unistd.h>
#include <sys/wait.h>

#define READ_EDGE 0
#define WRITE_EDGE 1
char	*fn_wrapper(char *str, void (*fn)());
