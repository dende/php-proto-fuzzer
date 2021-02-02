#include <fstream>
#include <iostream>
#include <streambuf>
#include <string>

#include "main/php_structure.pb.h"
#include "main/php_mutator.h"
#include "proto_to_php.h"

int main(int argc, char **argv) {

    php_proto_fuzzer::PhpStructure phpStructure;
    php_proto_fuzzer::PhpMutator mutator;

    mutator.Seed(6);

    std::cerr << "initial:" << phpStructure.DebugString() << std::endl;

    mutator.Mutate(&phpStructure, 200);
    mutator.Mutate(&phpStructure, 200);

    std::cerr << "postmutate:" << phpStructure.DebugString() << std::endl;

    auto Size = phpStructure.ByteSizeLong();
    auto buf_ptr = std::make_unique<uint8_t[]>(Size);

    phpStructure.SerializePartialToArray(buf_ptr.get(), Size);
    auto result = php_proto_fuzzer::ProtoToPhp(buf_ptr.get(), Size);
    std::cerr << result;
}

