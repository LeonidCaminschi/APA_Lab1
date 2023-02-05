#pragma once

#include "headers.h"

multiprecision::uint1024_t fib1 (uint64_t n) {
    if (n <= 1)
        return n;
    return fib1(n - 1) + fib1(n - 2);
}