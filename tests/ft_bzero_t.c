#include "Unity/src/unity.h"
#include "tester.h"

TEST_GROUP(ft_bzero);

typedef struct s_block {
	char	ch;
	int	num;
	char	*str;
	void	*ptr;
} t_block;

static t_block block;

TEST_SETUP(ft_bzero) {
	ft_bzero(&block, sizeof(t_block));
}

TEST_TEAR_DOWN(ft_bzero) {

}

TEST(ft_bzero, check_fail) {
	TEST_ASSERT_EQUAL_CHAR(0, block.ch);
	TEST_ASSERT_EQUAL_INT(0, block.num);
	TEST_ASSERT_EQUAL_PTR(0, block.ptr);
	TEST_ASSERT_EQUAL_STRING(NULL, block.str);
}

TEST_GROUP_RUNNER(ft_bzero) {
	RUN_TEST_CASE(ft_bzero, check_fail);
}
