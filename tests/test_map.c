#include "../src/map.h"

#include "test_asserts.h"

MAP_DECLARE(str_map, char *, char *)
MAP_DEFINE(str_map, char *, char *)

TEST(get, non_exist) {
    /*
    struct str_map m;
    str_map_init(&m);

    ASSERT_TRUE(opt_str_map_is_none(str_map_get(&m, "key")));
    */
}

int main(void) {
    RUN_TEST(get, non_exist);
}
