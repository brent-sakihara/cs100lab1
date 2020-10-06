cmake_minimum_required (VERSION 2.8)

add_subdirectory(googletest)

set(CMAKE_CXX_STANDARD 11)

add_executable(area_calculator
	src/main1.cpp
	src/rectangle.cpp
)

add_executable(c-echo
	main2.cpp
)

add_executable(test
	test.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)


