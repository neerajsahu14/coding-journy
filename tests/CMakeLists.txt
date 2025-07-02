add_subdirectory(.)

enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(hello_world_test hello_world_test.cpp)
target_link_libraries(hello_world_test ${GTEST_LIBRARIES} pthread)

add_test(NAME hello_world_test COMMAND hello_world_test)