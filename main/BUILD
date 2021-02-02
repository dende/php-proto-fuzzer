load("@rules_cc//cc:defs.bzl", "cc_proto_library")
load("@rules_proto//proto:defs.bzl", "proto_library")

proto_library(
    name = "php_structure_proto",
    srcs = ["php_structure.proto"],
)

cc_proto_library(
    name = "php_structure_cc_proto",
    deps = [":php_structure_proto"],
)

cc_library(
    name = "proto_to_php",
    srcs = [
        "proto_to_php.cpp",
        "proto_to_php.h"
        ],
    deps = [
        ":php_structure_cc_proto"
    ]
)

cc_library(
    name = "php_mutator",
    srcs = ["php_mutator.cpp", "php_mutator.h"],
    hdrs = [
        "php_mutator.h",
    ],
    deps = [
        ":php_structure_cc_proto",
        "@com_github_google_libprotobuf_mutator//:libprotobuf_mutator"
    ]
)


cc_binary(
    name = "proto_to_php_main",
    srcs = [
        "proto_to_php_main.cpp",
    ],
    deps = [
        ":proto_to_php",
        ":php_mutator"
    ]
)
