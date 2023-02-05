#pragma once

#include "headers.h"

multiprecision::uint1024_t fib2 (uint64_t n) {
    multiprecision::uint1024_t first = 0;
    multiprecision::uint1024_t second = 1;
    multiprecision::uint1024_t tmp;

    for (int i=1; i<n; i++) {
        tmp = second;
        second += first;
        first = tmp;
    }

    return second;
}