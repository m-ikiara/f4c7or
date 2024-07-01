#include "./factor.h"

Factors
factor(int number)
{
    int divisor = 2;
    Factors factors = {0, 0};

    while (number % divisor && divisor <= number) divisor++;

    if (divisor <= number) {
        factors.dividend = number / divisor;
        factors.divisor = divisor;
    }

    return factors;
}

int
main(int argc, char **argv)
{
    if (argc != 2 || !argv) exit(EXIT_FAILURE);
    char *path = argv[1];
    FILE *integer_file = fopen(path, "r");
    if (!integer_file) {
        printf("[ERROR] Can't open file %s for reading!\n", path);
        return EXIT_FAILURE;
    }

    int integer;
    printf("--------------------------------------------------------------\n");
    while (fscanf(integer_file, "%d", &integer) == 1) {
        Factors result = factor(integer);
        printf("[INFO] The number %d has its dividend as %d and its divisor as %d\n",
                integer, result.dividend, result.divisor);
    }
    printf("--------------------------------------------------------------\n");

    return EXIT_SUCCESS;
}
