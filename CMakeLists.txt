cmake_minimum_required(VERSION 3.21)
project(embedded_devops C)
set(CMAKE_C_STANDARD 11)

# ============ Firmware ============
add_executable(firmware
    src/main.c
    src/app.c
)

target_include_directories(firmware PRIVATE include)

# ============ Tests ===============
enable_testing()
add_subdirectory(tests)
