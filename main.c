#include "./factor.h"

int *
factor(int number)
{
    int divisor = 2, dividend = 0, factors[2] = {0};

    while (number % divisor) {
        if (divisor <= number) divisor++;
    }
    dividend = number / divisor;
    factors[0] = dividend;
    factors[1] = divisor;

    return factors;
}

int
main(int argc, char **argv)
{
    char *path = NULL;
    int integer = 0;

    if (argc != 2 || !argv) exit(EXIT_FAILURE);
    path = argv[1];

    FILE *integer_file = fopen(path, "r");
    if (!integer_file) {
        printf("[ERROR] Can't open file %s for reading!\n", path);
        return EXIT_FAILURE;
    }

    while (fscanf(integer_file, "%d", &integer) == 1) {
        int *result = factor(integer);
        printf("[INFO] The number %d has its dividend as %d and its divisor as %d\n", integer, result[0], result[1]);
    }

    return EXIT_SUCCESS;
}
