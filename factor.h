#ifndef _FACTOR_H_
#define _FACTOR_H_

#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct Factor_s {
    int dividend;
    int divisor;
} Factors;

Factors factor(int number);

#endif // !_FACTOR_H_
