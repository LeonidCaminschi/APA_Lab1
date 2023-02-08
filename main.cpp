#include "method1_recursion.h"
#include "method2_iteration.h"
#include "method3_matrix_calculation.h"
#include "method4_matrix_derived_equasion.h"
#include "method5_Binet.h"
#include "method6_Kartik.h"

void functions(multiprecision::uint1024_t (*f)(uint64_t), uint64_t n, string text) {
//    cout << "Starting of the " + text + " fibonaci algorithm" << endl;
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    f(n);

    auto end = chrono::high_resolution_clock::now();

    double time_taken =
            chrono::duration_cast<chrono::nanoseconds>(end - start).count();

    time_taken *= 1e-9;
//    cout << n << " ";
    cout << /*"Time taken: " <<*/ time_taken << setprecision(4) /*<< " sec" << endl*/ << endl;
}

int main() {
    uint64_t n[] =  {501, 631, 794, 1000,
            1259, 1585, 1995, 2512, 3162, 3981, 5012, 6310, 7943, 10000, 12589, 15849};

    for (auto nr : n) {
//        functions(fib1, nr, "recursive");
//        functions(fib2, nr, "iterative");
//        functions(fib3, nr, "matrix calculation");
//        functions(fib4, nr, "matrix derived equasion");
//        functions(fib5, nr, "Binet's formula");
        functions(fib6, nr + 1, "Kartik's K sequence");
    }
}
