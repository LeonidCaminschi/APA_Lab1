#pragma once

#include "headers.h"

void multiply(multiprecision::uint1024_t F[2][2], multiprecision::uint1024_t M[2][2]) {
    multiprecision::uint1024_t x = F[0][0] * M[0][0] +
                   F[0][1] * M[1][0];
    multiprecision::uint1024_t y = F[0][0] * M[0][1] +
                   F[0][1] * M[1][1];
    multiprecision::uint1024_t z = F[1][0] * M[0][0] +
                   F[1][1] * M[1][0];
    multiprecision::uint1024_t w = F[1][0] * M[0][1] +
                   F[1][1] * M[1][1];

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void power(multiprecision::uint1024_t F[2][2], uint64_t n) {
    multiprecision::uint1024_t i;
    multiprecision::uint1024_t M[2][2] = {{1, 1}, {1, 0}};

    for(i = 2; i <= n; i++)
        multiply(F, M);
}

multiprecision::uint1024_t fib3(uint64_t n) {
    multiprecision::uint1024_t F[2][2] = {{1, 1}, {1, 0}};

    if (n == 0)
        return 0;

    power(F, n - 1);

    return F[0][0];
}