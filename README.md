The Selenium C++ Automation Testing Framework is a lightweight, modular, and efficient browser automation framework developed entirely in C++17 using the WebDriverXX library and Google Test (GTest).
This project demonstrates end-to-end automation capabilities, simulating browser-driven interactions such as navigation, input handling, and result validation on real web applications like Google and Naukri.
Key Features:

Custom Automation Framework:
Implemented a reusable test framework in pure C++ to automate browser actions using Selenium WebDriver standards.

Integrated Test Suite:
Used Google Test (GTest) for structured test case creation, assertions, and automated execution pipelines.

Cross-Component Design:
Built a dedicated browser helper module for WebDriver lifecycle management (launch, navigation, teardown).

Data-Driven Testing:
Developed test_data.h to dynamically store and manage multiple input datasets (URLs, keywords, and test cases).

Scalable & Configurable:
Supports easy browser configuration through runtime parameters and JSON-style data injection.

Port-Configurable Execution:
Configured ChromeDriver on port 4444, maintaining alignment with standard Selenium Grid setups.

Error Handling & Resilience:
Incorporated robust exception handling for failed WebDriver sessions and invalid HTTP responses.

Technical Description
Category	                       Technology
Programming Language	             C++17
Test Framework	               Google Test (GTest)
Browser Automation	           WebDriverXX (C++ Selenium Client)
Browser	Google                 Chrome (via ChromeDriver)
Build Tool	                    g++ / MinGW (MSYS2)
Communication Protocol	       HTTP/JSON WebDriver API
