/*****************************************************************************
 * @Author                : AkashGhosh3<akaashghosh393@gmail.com>            *
 * @CreatedDate           : 2025-10-03 14:22:25                              *
 * @LastEditors           : AkashGhosh3<akaashghosh393@gmail.com>            *
 * @LastEditDate          : 2025-10-03 14:22:26                              *
 * @FilePath              : selenium_project/helpers/test_data.h             *
 * @CopyRight             : MerBleueAviation                                 *
 ****************************************************************************/

#pragma once
#include <string>
#include <vector>

namespace testdata {

struct TestCase {
    std::string url;
    std::string search;
};

inline std::vector<TestCase> cases = {
    { "https://www.google.com", "SDET jobs" },
    { "https://www.naukri.com", "Software Testing" }
};

} // namespace testdata
