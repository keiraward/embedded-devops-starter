cmake_minimum_required(VERSION 3.21)
project(embedded_devops C)
set(CMAKE_C_STANDARD 11)
# =====================================================
# ✅ فعال‌سازی فلگ‌های پوشش کد (فقط در GitHub Actions)
# =====================================================
if(DEFINED ENV{GITHUB_ACTIONS})
    message(STATUS "✅ Running inside GitHub Actions — enabling coverage flags")
    add_compile_options(--coverage)
    add_link_options(--coverage)
endif()

# ============ Firmware ============
add_executable(firmware
    src/main.c
    src/app.c
    src/hal_gpio.c
)

target_include_directories(firmware PRIVATE include)

# ============ Tests ===============
enable_testing()
add_subdirectory(tests)

option(ENABLE_CODE_COVERAGE "Enable GCC/Clang coverage instrumentation" OFF)
if(ENABLE_CODE_COVERAGE)
    if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
        message(STATUS "Code coverage instrumentation enabled")
        add_compile_options(-fprofile-arcs -ftest-coverage)
        add_link_options(-fprofile-arcs -ftest-coverage)
    else()
        message(WARNING "Code coverage requested, but compiler ${CMAKE_C_COMPILER_ID} is not supported")
    endif()
endif()
