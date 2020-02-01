load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "Cpp17_tut",
    deps = [
        ":Cpp17_tut_lib",
    ],
    
)

cc_library(
    name = "Cpp17_tut_lib",
    srcs = ["src/main.cpp"],
    hdrs = ["hdrs/Type_deduction.hpp"],
)