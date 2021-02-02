load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "bazel_skylib",
    urls = [
        "https://github.com/bazelbuild/bazel-skylib/releases/download/1.0.3/bazel-skylib-1.0.3.tar.gz",
        "https://mirror.bazel.build/github.com/bazelbuild/bazel-skylib/releases/download/1.0.3/bazel-skylib-1.0.3.tar.gz",
    ],
    sha256 = "1c531376ac7e5a180e0237938a2536de0c54d93f5c278634818e0efc952dd56c",
)
load("@bazel_skylib//:workspace.bzl", "bazel_skylib_workspace")
bazel_skylib_workspace()

# rules_cc defines rules for generating C++ code from Protocol Buffers.
http_archive(
    name = "rules_cc",
    sha256 = "71d037168733f26d2a9648ad066ee8da4a34a13f51d24843a42efa6b65c2420f",
    strip_prefix = "rules_cc-b1c40e1de81913a3c40e5948f78719c28152486d",
    urls = [
        "https://github.com/bazelbuild/rules_cc/archive/b1c40e1de81913a3c40e5948f78719c28152486d.tar.gz",
    ],
)

# rules_proto defines abstract rules for building Protocol Buffers.
http_archive(
    name = "rules_proto",
    sha256 = "2a20fd8af3cad3fbab9fd3aec4a137621e0c31f858af213a7ae0f997723fc4a9",
    strip_prefix = "rules_proto-a0761ed101b939e19d83b2da5f59034bffc19c12",
    urls = [
        "https://github.com/bazelbuild/rules_proto/archive/a0761ed101b939e19d83b2da5f59034bffc19c12.tar.gz",
    ],
)

load("@rules_cc//cc:repositories.bzl", "rules_cc_dependencies")
rules_cc_dependencies()

load("@rules_proto//proto:repositories.bzl", "rules_proto_dependencies", "rules_proto_toolchains")
rules_proto_dependencies()
rules_proto_toolchains()


http_archive(
   name = "com_github_google_libprotobuf_mutator",
   sha256 = "803d19348ea492964e69f2cbeba98e2f685aaadf96049726353848fef167c767",
   strip_prefix = "libprotobuf-mutator-e5869dd9690c3f4dfb842fb90bd07a5a9ee32172",
   urls = ["https://github.com/google/libprotobuf-mutator/archive/e5869dd9690c3f4dfb842fb90bd07a5a9ee32172.tar.gz"],
   build_file = "@//:libprotobuf-mutator.BUILD",
)
