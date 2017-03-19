#include "equations.h"

float sigmoid(float x)
{
    return 1.0/(1.0+exp(-x));
}

float sigmoidDerivative(float x)
{
    return activate(x)*(1.0 - activate(x));
}
