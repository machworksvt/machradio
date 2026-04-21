cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)

project(testMAVSDK)

add_executable(test 
    main.cpp    
)

find_package(MAVSDK REQUIRED)

target_link_libraries(test
    PRIVATE
    MAVSDK::mavsdk
)