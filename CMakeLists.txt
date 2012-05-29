project(boost_test)
cmake_minimum_required(VERSION 2.8)

# Required with CMake >= 2.8 on RHEL-like installs since the CMake config
# shipped with the EPEL Boost libraries specifies the wrong paths for
# libraries.
#
# (Related to https://bugzilla.redhat.com/show_bug.cgi?id=768657).
set(Boost_NO_BOOST_CMAKE ON)

find_package(Boost REQUIRED COMPONENTS filesystem system)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})
add_executable(boost_test boost_test.cpp)
target_link_libraries(boost_test ${Boost_LIBRARIES})
