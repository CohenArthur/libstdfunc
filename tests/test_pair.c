#include "../src/pair.h"

#include "test_asserts.h"

PAIR_DECLARE(int_pair, int, int)
PAIR_DEFINE(int_pair, int, int)

TEST(pair, ok) {
    struct int_pair pi = int_pair_new(1, 2);
}

TEST(pair, get_first) {
    struct int_pair pi = int_pair_new(1, 2);

    ASSERT_EQ(int_pair_first(pi), 1);
}

TEST(pair, get_second) {
    struct int_pair pi = int_pair_new(1, 2);

    ASSERT_EQ(int_pair_second(pi), 2);
}

int main(void) {
    RUN_TEST(pair, ok);
    RUN_TEST(pair, get_first);
    RUN_TEST(pair, get_second);
}
