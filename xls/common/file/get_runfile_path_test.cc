// Copyright 2020 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "xls/common/file/get_runfile_path.h"

#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "xls/common/file/filesystem.h"
#include "xls/common/status/matchers.h"
#include "xls/common/status/statusor.h"

namespace xls {
namespace {

using status_testing::IsOkAndHolds;
using ::testing::HasSubstr;

TEST(GetRunfilePathTest, GetXlsRunfilePathReturnsTheRightPath) {
  xabsl::StatusOr<std::string> test_cc_file_contents = GetFileContents(
      GetXlsRunfilePath("xls/common/file/get_runfile_path_test.cc"));

  EXPECT_THAT(
      test_cc_file_contents,
      IsOkAndHolds(HasSubstr("Some string that's only in this file. 1543234")));
}

}  // namespace
}  // namespace xls
