/*****************************************************************************
 * @Author                : AkashGhosh3<akaashghosh393@gmail.com>            *
 * @CreatedDate           : 2025-10-03 14:21:30                              *
 * @LastEditors           : AkashGhosh3<akaashghosh393@gmail.com>            *
 * @LastEditDate          : 2025-10-03 14:21:31                              *
 * @FilePath              : selenium_project/helpers/browser_helpers.h       *
 * @CopyRight             : MerBleueAviation                                 *
 ****************************************************************************/

#pragma once
#include "webdriverxx/webdriver.h"
#include "webdriverxx/browsers/chrome.h"
#include "webdriverxx/by.h"
#include <string>

using namespace webdriverxx;

namespace helper {

// Start ChromeDriver on a given URL (default localhost:4444)
inline WebDriver StartBrowser(const std::string& browser_path = "", const std::string& url = "http://localhost:4444") {
    // ChromeDriver must already be running on the given port
    // No /wd/hub path, works with ChromeDriver 140+
    return Start(Chrome(), url);
}

// Navigate to a given URL
inline void OpenUrl(WebDriver& driver, const std::string& url) {
    driver.Navigate(url);
}

// Close the browser session (WebDriverXX automatically closes when driver goes out of scope)
inline void CloseBrowser(WebDriver& driver) {
    // If your WebDriverXX version supports Quit(), uncomment next line
    // driver.Quit();
    // Otherwise, simply let driver go out of scope
}

} // namespace helper
