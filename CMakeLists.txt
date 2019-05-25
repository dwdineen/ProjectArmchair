cmake_minimum_required(VERSION 3.0.0)
project(Armchair)

set(SFML_STATIC_LIBRARIES TRUE)

set(SFML_DIR "${PROJECT_SOURCE_DIR}/ext/SFML-2.5.1-windows-vc15-64-bit/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

# Create armchair executable
add_executable(armchair src/armchair/armchair.cpp)


# Create sfml sample executable
add_executable(sfml_sample src/sfml_sample/sfml_sample.cpp)
target_link_libraries(sfml_sample sfml-graphics sfml-audio)

