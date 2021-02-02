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


cc_binary(
    name = "php_mutator",
    srcs = ["php_mutator.cpp", "php_mutator.h"],
    deps = [
        ":php_structure_cc_proto",
        "@com_github_google_libprotobuf_mutator//:libprotobuf_mutator"
    ]
)
