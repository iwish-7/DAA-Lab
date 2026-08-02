#include <stdio.h>
#include <stdlib.h>

typedef struct {
    const char *expression;
    const char *big_o;
    int rank;
} Function;

int compareFunctions(const void *a, const void *b) {
    const Function *f1 = (const Function *)a;
    const Function *f2 = (const Function *)b;
    return f1->rank - f2->rank;
}

int main(void) {
    Function functions[] = {
        {"n * log2(n)",    "O(n log n)",   7},
        {"12 * sqrt(n)",   "O(n^0.5)",     3},
        {"1 / n",          "O(1 / n)",     1},
        {"n^(log2(n))",    "O(n^(log n))", 11},
        {"100n^2 + 6n",    "O(n^2)",       9},
        {"n^0.51",         "O(n^0.51)",    5},
        {"n^2 - 324",      "O(n^2)",       8},
        {"50 * n^0.5",     "O(n^0.5)",     4},
        {"2 * n^3",        "O(n^3)",       10},
        {"3^n",            "O(3^n)",       12},
        {"(2^32) * n",     "O(n)",         6},
        {"log2(n)",        "O(log n)",     2}
    };

    int count = sizeof(functions) / sizeof(functions[0]);

    qsort(functions, count, sizeof(Function), compareFunctions);

    printf("Functions in Increasing Order of Growth (as n -> infinity):\n");
    printf("=========================================================\n");
    for (int i = 0; i < count; i++) {
        printf("%2d. %-15s | Asymptotic Class: %s\n", 
               i + 1, functions[i].expression, functions[i].big_o);
    }

    return 0;
}