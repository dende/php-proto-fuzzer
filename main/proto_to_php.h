#include <cstdint>
#include <cstddef>
#include <string>

namespace php_proto_fuzzer {
    class PhpStructure;

    std::string PhpStructureToString(PhpStructure &phpStructure);
    std::string ProtoToPhp(const uint8_t *Data, size_t Size);
}
