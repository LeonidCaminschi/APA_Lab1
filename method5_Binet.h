#pragma once

#include "headers.h"

multiprecision::uint1024_t fib5(uint64_t n) {
    double phi = (1 + sqrt(5)) / 2;
    return (uint64_t) (round(pow(phi, n) / sqrt(5)));
}