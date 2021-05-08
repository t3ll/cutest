#include <stdio.h>

#include "cutest.h"
#include "add.h"

a_test(add_working) {
	do_assert("add_working(1,2) should be equal to 3", add_working(1,2) == 3);
    return PASS;
}

a_test(add_broken) {
	do_assert("add_broken(1,2) should be equal to 3", add_broken(1,2) == 3);
    return PASS;
}

a_test(every) {
    do_test(add_working);
    do_test(add_broken);
    return PASS;
}

int main(void) {
    a_result result = run_test(every);
    do_print_result(stdout, result);
    return a_status(result);
};
