#include "vulnerable_functions.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t * data, size_t size)
{
    VulnerableFunction2(data, size, true);
    VulnerableFunction2(data, size, false);
    return 0;
}
