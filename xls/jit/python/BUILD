# Copyright 2020 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

load("//dependency_support/pybind11:pybind11.bzl", "xls_pybind_extension")

package(
    default_visibility = [
        "//xls:xls_internal",
    ],
    licenses = ["notice"],  # Apache 2.0
)

xls_pybind_extension(
    name = "llvm_ir_jit",
    srcs = ["llvm_ir_jit.cc"],
    py_deps = [
        "//xls/ir/python:function",  # build_cleaner: keep
        "//xls/ir/python:value",  # build_cleaner: keep
    ],
    deps = [
        "//xls/common/python:absl_casters",
        "//xls/common/status:statusor_pybind_caster",
        "//xls/ir/python:wrapper_types",
        "//xls/jit:llvm_ir_jit",
    ],
)
