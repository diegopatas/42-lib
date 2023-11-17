#include "Unity/src/unity.h"
#include "tester.h"
#include <limits.h>

TEST_GROUP(ft_atoi);

TEST_SETUP(ft_atoi) {
}

TEST_TEAR_DOWN(ft_atoi) {

}

static int	match(int expect, char *given) {
	TEST_ASSERT_EQUAL_INT(expect, ft_atoi(given));
	return 0;
}

TEST(ft_atoi, check_normal) {
	match(0, "0");
	match(1, "1");
	match(-1, "-1");
	match(98, "98");
	match(256, "256");
	match(-1024, "-1024");
	match(2147483647, "2147483647");
	match(-2147483648, "-2147483648");
}

TEST(ft_atoi, check_limit) {
	match(2147483647, "2147483647");
	match(INT_MAX, "2147483647");
	match(-2147483648, "-2147483648");
	match(INT_MIN, "-2147483648");
}

TEST(ft_atoi, check_valid_char) {
	TEST_ASSERT_EQUAL_INT(1, ft_atoi("1a2"));
	TEST_ASSERT_EQUAL_INT(12, ft_atoi("12a"));
	TEST_ASSERT_EQUAL_INT(12, ft_atoi(" 12 "));
	TEST_ASSERT_EQUAL_INT(1, ft_atoi("1 2"));
	TEST_ASSERT_EQUAL_INT(12, ft_atoi("12 "));
	TEST_ASSERT_EQUAL_INT(-1, ft_atoi("-1 2"));
	TEST_ASSERT_EQUAL_INT(-12, ft_atoi("-12 "));
}

TEST(ft_atoi, check_invalid_char) {
	TEST_ASSERT_EQUAL_INT(0, ft_atoi("a12"));
	TEST_ASSERT_EQUAL_INT(0, ft_atoi("- 12"));
}

TEST_GROUP_RUNNER(ft_atoi) {
	RUN_TEST_CASE(ft_atoi, check_normal);
	RUN_TEST_CASE(ft_atoi, check_limit);
	RUN_TEST_CASE(ft_atoi, check_valid_char);
	RUN_TEST_CASE(ft_atoi, check_invalid_char);
}
