# OpenAI cpp library.

add_library(openai-cpp-library
    STATIC
        ${CMAKE_SOURCE_DIR}/include/openai/openai.hpp
        openai.cpp)