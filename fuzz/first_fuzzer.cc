#include "vulnerable_functions.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  VulnerableFunction1(data, size);
  return 0;
}
