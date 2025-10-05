cmake_minimum_required(VERSION 3.21)
project(blinky C)
set(CMAKE_C_STANDARD 11)

# ---------- برنامه اصلی ----------
add_executable(firmware
    src/main.c
    src/app.c
)
target_include_directories(firmware PRIVATE include)
if (MINGW)
  target_link_options(firmware PRIVATE -mconsole)
  target_sources(firmware PRIVATE src/winentry.c)
endif()

# ---------- تست‌ها ----------
include(CTest)
enable_testing()

# تست ۱: عملیات ریاضی
add_executable(test_math
    tests/test_math.c
    src/app.c
    third_party/Unity/src/unity.c
)
target_include_directories(test_math PRIVATE
    include
    third_party/Unity/src
)
add_test(NAME math_test COMMAND test_math)

# تست ۲: منطق
add_executable(test_logic
    tests/test_logic.c
    src/app.c
    third_party/Unity/src/unity.c
)
target_include_directories(test_logic PRIVATE
    include
    third_party/Unity/src
)
add_test(NAME logic_test COMMAND test_logic)
# ========== Unit Test Section ==========
add_executable(test_math_utils tests/test_math_utils.c)
target_include_directories(test_math_utils PRIVATE
    include
    third_party/Unity/src
)
target_sources(test_math_utils PRIVATE
    src/math_utils.c
    third_party/Unity/src/unity.c
)
add_test(NAME math_utils_test COMMAND test_math_utils)
