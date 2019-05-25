cmake_minimum_required(VERSION 3.0.0)
project(Armchair)

set(SFML_STATIC_LIBRARIES TRUE)

set(SFML_DIR "${PROJECT_SOURCE_DIR}/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(main src/main.cpp)
target_link_libraries(main sfml-graphics sfml-audio)
