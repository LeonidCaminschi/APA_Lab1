#pragma once

#include "headers.h"

multiprecision::uint1024_t fib6(uint64_t n) {
    if (n > 0) {
        uint64_t n1 = 1;
        uint64_t n2 = 1;
        uint64_t tmp;
        if (n > 3) {
            for (int i = 0; i < floor(n/3); i++) {
                tmp = n2;
                n2 = ((n2 << 2) + n1);
                n1 = tmp;
            }
        }
        if ((n % 3) == 0) {
            return n1;
        } else if ((n % 3) == 1) {
            return (n2-n1) >> 1;
        } else if ((n % 3) == 2) {
            return (n2+n1) >> 1;
        }
    } else {
        return -1;
    }
}