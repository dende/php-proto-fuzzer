//
// Created by c on 01.02.21.
//
#include "php_mutator.h"
#include "main/php_structure.pb.h"

namespace php_proto_fuzzer {

    int main() {

        GOOGLE_PROTOBUF_VERIFY_VERSION;

        PhpMutator mutator;
        mutator.Seed(1);

        PhpStructure phpStructure;
        std::cout << phpStructure.DebugString() << std::endl;
        mutator.Mutate(&phpStructure, 200);
        mutator.Mutate(&phpStructure, 200);
        mutator.Mutate(&phpStructure, 200);
        mutator.Mutate(&phpStructure, 200);
        mutator.Mutate(&phpStructure, 200);
        mutator.Mutate(&phpStructure, 200);
        mutator.Mutate(&phpStructure, 200);
        mutator.Mutate(&phpStructure, 200);
        mutator.Mutate(&phpStructure, 200);
        mutator.Mutate(&phpStructure, 200);
        mutator.Mutate(&phpStructure, 200);
        mutator.Mutate(&phpStructure, 200);
        std::cout << phpStructure.DebugString() << std::endl;
        return 0;
    }


}

int main() {
    return php_proto_fuzzer::main();
}