cmake_minimum_required(VERSION 3.14)

# Project name.
project(openai-cpp
    DESCRIPTION "OpenAI C++ library."
    LANGUAGES CXX)

# C++ standard version.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Adding subfolder property.
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# External packages.
find_package(cpr CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)

# Sources.
add_subdirectory(src/openai)
enable_testing()
add_subdirectory(tests/openai)
add_subdirectory(examples)
