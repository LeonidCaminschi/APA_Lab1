#include "method1_recursion.h"
#include "method2_iteration.h"
#include "method3_matrix_calculation.h"
#include "method4_matrix_derived_equasion.h"
#include "method5_Binet.h"
#include "method6_Kartik.h"

void functions(multiprecision::uint1024_t (*f)(uint64_t), uint64_t n, string text) {
    cout << "Starting of the " + text + " fibonaci algorithm" << endl;
    auto start = chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);

    cout << f(n) << endl;

    auto end = chrono::high_resolution_clock::now();

    double time_taken =
            chrono::duration_cast<chrono::nanoseconds>(end - start).count();

    time_taken *= 1e-9;

    cout << "Time taken: " << time_taken << setprecision(4) << " sec" << endl << endl;
}

int main() {
    for (int n = 20; n <= 30; n++) {
        functions(fib1, n, "recursive");
        functions(fib2, n, "iteration");
        functions(fib3, n, "matrix calculation");
        functions(fib4, n, "matrix derived equasion");
        functions(fib5, n, "Binet's formula");
        functions(fib6, n+1, "Kartik's K sequence");
    }
}
