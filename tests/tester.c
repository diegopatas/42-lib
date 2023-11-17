#include "./tester.h"

void run_all_tests(void) {
	RUN_TEST_GROUP(ft_atoi);
	RUN_TEST_GROUP(ft_bzero);
}

int	main(int argc, const char *argv[]) {

	return UnityMain(argc, argv, run_all_tests);
}
