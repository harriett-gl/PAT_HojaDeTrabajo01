#include "Ejercicio03.h"
#include <cmath>

bool Ejercicio03::isPowerOfTwo(int n)
{
    n = abs(n);
    if (n == 0) {
        return false;
    }
    if (n == 1) {
        return true;
    }
    if (n % 2 == 0) {
        return isPowerOfTwo(n / 2);
    }
    return false;
}
