load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

# build one simple print message function
cc_binary(
    name = "cout",
    srcs = ["cout.cpp"],
)

# build char function
cc_binary(
    name = "char",
    srcs = ["char.cpp"],
)

# build pointer function
cc_binary(
    name = "pointer",
    srcs = ["pointer.cpp"],
)

# build const function
cc_library(
    name = "constBuild",
    srcs = ["const.cpp"],
    hdrs = ["const.h"],
)

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    deps = [
        ":constBuild",
    ],
)