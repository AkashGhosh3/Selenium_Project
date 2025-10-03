#include <gtest/gtest.h>

// Include all your test files
#include "alerts_test.cpp"
#include "browsers_test.cpp"
#include "capabilities_test.cpp"
#include "client_test.cpp"
#include "conversions_test.cpp"
#include "element_test.cpp"
#include "examples_test.cpp"
#include "finder_test.cpp"
#include "frames_test.cpp"
#include "http_connection_test.cpp"
#include "js_test.cpp"
#include "keyboard_test.cpp"
#include "mouse_test.cpp"
#include "resource_test.cpp"
#include "session_test.cpp"
#include "shared_test.cpp"
#include "to_string_test.cpp"
#include "wait_match_test.cpp"
#include "wait_test.cpp"
#include "webdriver_test.cpp"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


