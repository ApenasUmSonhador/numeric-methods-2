#include "Diff.h"
#include <iostream>


float Diff::fw(float (*f)(float), float x, float h, int order) {
    if (order == 1) {
        return (f(x + h) - f(x)) / h;
    }
    return 0.0; // Placeholder for higher order methods, TODO: Implement higher order methods
}