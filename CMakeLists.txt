cmake_minimum_required(VERSION 3.21)
project(embedded_devops C)
set(CMAKE_C_STANDARD 11)

# -------------------------------
# Firmware Executable
# -------------------------------
add_executable(firmware
    src/main.c
    src/app.c
)
target_include_directories(firmware PRIVATE include)

# -------------------------------
# Unit Test Executable (Unity)
# -------------------------------
add_executable(test_app
    tests/test_app.c
    src/app.c
    third_party/Unity/src/unity.c
)
target_include_directories(test_app PRIVATE
    include
    third_party/Unity/src
)

add_test(NAME app_test COMMAND test_app)
enable_testing()
