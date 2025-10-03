/*****************************************************************************
 * @Author                : AkashGhosh3<akaashghosh393@gmail.com>            *
 * @CreatedDate           : 2025-10-01 00:00:00                              *
 * @LastEditors           : AkashGhosh3<akaashghosh393@gmail.com>            *
 * @LastEditDate          : 2025-10-03 14:32:16                              *
 * @FilePath              : selenium_project/chrome_test.cpp                 *
 * @CopyRight             : MerBleueAviation                                 *
 ****************************************************************************/





#include "helpers/browser_helpers.h"
#include "helpers/test_data.h"
#include <gtest/gtest.h>

using namespace webdriverxx;

TEST(ChromeTest, SearchKeywords) {
    // Start ChromeDriver (make sure it's running on port 4444)
    WebDriver driver = helper::StartBrowser("", "http://localhost:4444");

    for (const auto& test : testdata::cases) {
    helper::OpenUrl(driver, test.url);

    try {
        auto search_box = driver.FindElement(By("name", "q"));
        search_box.Clear();
        search_box.SendKeys(test.search).Submit();
    } catch (...) {
        // Skip if search box not found
    }
}

    // Browser will close automatically when driver goes out of scope
}
