#pragma once

#define MAP_DECLARE(Name, KType, VType)
#define MAP_DEFINE(Name, KType, VType)

/**
 * The struct map provides a static hashmap structure that can be used to store key-value
 * pairs
 */
struct map {
};

/**
 * Initialize an already existing map
 */
void map_init(struct map *m);
