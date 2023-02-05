#pragma once

#include "headers.h"

const uint64_t MAX = 5000;

multiprecision::uint1024_t f[MAX] = {0};

multiprecision::uint1024_t fib4(uint64_t n) {
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);

    if (f[n])
        return f[n];

    uint64_t k = (n & 1)? (n+1)/2 : n/2;

    f[n] = (n & 1)? (fib4(k)*fib4(k) + fib4(k-1)*fib4(k-1))
                  : (2*fib4(k-1) + fib4(k))*fib4(k);

    return f[n];
}