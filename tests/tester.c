#include "./tester.h"

void run_all_tests(void) {
	RUN_TEST_GROUP(ft_atoi);
	RUN_TEST_GROUP(ft_bzero);
	RUN_TEST_GROUP(ft_putstr); //cut-paste this at tests.c
}

int	main(int argc, const char *argv[]) {

	return UnityMain(argc, argv, run_all_tests);
}
