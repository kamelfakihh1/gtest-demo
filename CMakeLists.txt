cmake_minimum_required(VERSION 3.14)
project(gtest-demo)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    ${PROJECT_SOURCE_DIR}/src/math.cpp
)

# Add an executable with the above sources
add_library(math)

target_sources(math
  PRIVATE
    ${SOURCES}
)

# Set the directories that should be included in the build command for this target
# when running g++ these will be included as -I/directory/path/
target_include_directories(math
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)

# unit tests

enable_testing()

add_executable(
  math_test
  ${PROJECT_SOURCE_DIR}/src/test/math_test.cpp
)

target_include_directories(math_test
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)


target_link_libraries(
  math_test
  math
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(math_test)