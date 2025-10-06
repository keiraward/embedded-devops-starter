# ============================
# CMake config for Unit Tests
# ============================

# ساخت فایل اجرایی تست
add_executable(test_app
    test_app.c
    ../src/app.c
    ../third_party/Unity/src/unity.c
)

# مسیرهای include
target_include_directories(test_app PRIVATE
    ../include
    ../third_party/Unity/src
)

# تعریف تست برای CTest
add_test(NAME app_test COMMAND test_app)
