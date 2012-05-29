project(boost_test)
cmake_minimum_required(VERSION 2.8)

find_package(Boost REQUIRED COMPONENTS filesystem system)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})
add_executable(boost_test boost_test.cpp)
target_link_libraries(boost_test ${Boost_LIBRARIES})
