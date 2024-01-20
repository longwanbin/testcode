#include "vulnerable_functions.h"
#include <functional>
#include <string>

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size)
{
    std::string data_string(reinterpret_cast<const char*>(data), size);
    auto data_hash = std::hash<std::string>()(data_string);
  std::size_t flags = static_cast<size_t>(data_hash);
    VulnerableFunction3(data, size, flags);
    return 0;
}
