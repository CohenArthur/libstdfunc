#pragma once

/**
 * Declare a new pair containing a `FType`, a `SType`, and named `Name`
 */
#define PAIR_DECLARE(Name, FType, SType)                                       \
                                                                               \
  /**                                                                          \
   * Struct representing a pair of two (maybe different) types                 \
   */                                                                          \
  struct Name;                                                                 \
                                                                               \
  /**                                                                          \
   * Create a new pair with the two given elements                             \
   */                                                                          \
  struct Name Name##_new(FType first, SType second);                           \
                                                                               \
  /**                                                                          \
   * Get the first element of a given pair                                     \
   */                                                                          \
  FType Name##_first(struct Name pair);                                        \
                                                                               \
  /**                                                                          \
   * Get the second element of a given pair                                    \
   */                                                                          \
  SType Name##_second(struct Name pair);

/**
 * Define a new pair containing a `FType`, a `SType`, and named `Name`
 */
#define PAIR_DEFINE(Name, FType, SType)                                        \
                                                                               \
  struct Name {                                                                \
    FType first;                                                               \
    SType second;                                                              \
  };                                                                           \
                                                                               \
  struct Name Name##_new(FType first, SType second) {                          \
    struct Name pair = {                                                       \
        .first = first,                                                        \
        .second = second,                                                      \
    };                                                                         \
                                                                               \
    return pair;                                                               \
  }                                                                            \
                                                                               \
  FType Name##_first(struct Name pair) { return pair.first; }                  \
                                                                               \
  SType Name##_second(struct Name pair) { return pair.second; }
