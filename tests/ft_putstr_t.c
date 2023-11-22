#include "Unity/extras/memory/src/unity_memory.h"
#include "Unity/src/unity.h"
#include "tester.h"
#include <stdlib.h>

TEST_GROUP(ft_putstr);

TEST_SETUP(ft_putstr) {
}

TEST_TEAR_DOWN(ft_putstr) {
}


static void	verify(char *expect, char *given, int msg){
	TEST_ASSERT_EQUAL_STRING_MESSAGE(expect, given, ft_itoa(msg));
	free(given);
	return;
}
TEST(ft_putstr, str_not_empty) {
	verify("4", fn_wrapper("4", &ft_putstr_fd), __LINE__);
	verify("424242", fn_wrapper("424242", &ft_putstr_fd), __LINE__);
}

TEST(ft_putstr, str_empty){
	verify("", fn_wrapper("", &ft_putstr_fd), __LINE__);
}

TEST_GROUP_RUNNER(ft_putstr) {
	RUN_TEST_CASE(ft_putstr, str_not_empty);
	RUN_TEST_CASE(ft_putstr, str_empty);
}

/* EXAMPLE
#include "tests.h"

int	*esp;
int	output;
TEST_GROUP(mock);
TEST_SETUP(mock) {
	esp = NULL;
	output = 0;
}
TEST_TEAR_DOWN(mock) {}
int	expect(int value){
	*esp = value;
}
int	given(int given){
	output = given;
	TEST_ASSERT_EQUAL_INT(esp, output);
}
TEST(mock, check_int) {
	expect(42);
	given(42);
}
TEST(mock, check_fail) {
	TEST_FAIL();
}
TEST(mock, check_fail_msg) {
	TEST_FAIL_MESSAGE("Fails here!");
}
TEST_GROUP_RUNNER(mock) {
	RUN_TEST_CASE(mock, check_fail);
	RUN_TEST_CASE(mock, check_fail_msg);
} */

