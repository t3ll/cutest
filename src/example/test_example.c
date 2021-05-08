#include <stdio.h>

#include "cutest.h"
#include "add.h"

test(add_working) {
    do_assert("add_working(1,2) should be equal to 3", add_working(1,2) == 3);
    return PASS;
}

test(add_broken) {
    do_assert("add_broken(1,2) should be equal to 3", add_broken(1,2) == 3);
    return PASS;
}

test(every) {
    do_test(add_working);
    do_test(add_broken);
    return PASS;
}

int main(void) {
    test_result result = run_test(every);
    print_result(stdout, result);
    return test_status(result);
};
