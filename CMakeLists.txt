cmake_minimum_required(VERSION 3.21)
project(embedded_devops C)
set(CMAKE_C_STANDARD 11)

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
# Enable code coverage flags for GCC
if(CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fprofile-arcs -ftest-coverage")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fprofile-arcs -ftest-coverage")
endif()
