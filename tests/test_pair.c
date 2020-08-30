#include <string.h>

#include "test_asserts.h"

#include "../src/pair.h"

PAIR_DECLARE(int_pair, int, int)
PAIR_DEFINE(int_pair, int, int)

PAIR_DECLARE(int_str_p, int, char*)
PAIR_DEFINE(int_str_p, int, char*)

TEST(pair, get_first) {
    struct int_pair pi = int_pair_new(1, 2);

    ASSERT_EQ(int_pair_first(pi), 1);
}

TEST(pair, get_second) {
    struct int_pair pi = int_pair_new(1, 2);

    ASSERT_EQ(int_pair_second(pi), 2);
}

TEST(pair, other_type) {
    struct int_str_p p = int_str_p_new(strlen("Hey"), "Hey");


    ASSERT_EQ(int_str_p_first(p), 3);
    ASSERT_EQ(strcmp(int_str_p_second(p), "Hey"), 0);
}

int main(void) {
    RUN_TEST(pair, get_first);
    RUN_TEST(pair, get_second);
    RUN_TEST(pair, other_type);
}
