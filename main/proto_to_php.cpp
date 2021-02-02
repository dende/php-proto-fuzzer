#include <ostream>
#include <sstream>
#include "proto_to_php.h"
#include "main/php_structure.pb.h"

namespace php_proto_fuzzer {

    std::ostream &operator<<(std::ostream &os, const Statement &s) {
        os << "statement \n";
        return os;
    }

    std::ostream &operator<<(std::ostream &os, const StatementList &sl) {
        for (auto& s : sl.statements()) os << s;
        return os;
    }

    std::ostream &operator<<(std::ostream &os, const PhpStructure &ps) {
        os << "<?php\n";
        os << ps.statement_list();
        return os;
    }

    std::string PhpStructureToString(PhpStructure &phpStructure) {
        std::ostringstream os;
        os << phpStructure;
        return os.str();
    }

    std::string ProtoToPhp(const uint8_t *Data, size_t Size) {
        PhpStructure phpStructure;
        if (!phpStructure.ParsePartialFromArray(Data, Size))
            return "#error invalid proto\n";
        return PhpStructureToString(phpStructure);
    }

}
