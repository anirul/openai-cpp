# OpenAI cpp library.

add_library(OpenAICppLibrary
  STATIC
    ${CMAKE_SOURCE_DIR}/include/openai/openai.hpp
    ${CMAKE_SOURCE_DIR}/include/openai/v1/connection.hpp
    ${CMAKE_SOURCE_DIR}/include/openai/v1/chat.hpp
    ${CMAKE_SOURCE_DIR}/include/openai/v1/engine.hpp
    ${CMAKE_SOURCE_DIR}/include/openai/v1/message.hpp
    v1/connection.cpp
    v1/engine.cpp
    v1/chat.cpp
)

target_include_directories(OpenAICppLibrary
  PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)

target_link_libraries(OpenAICppLibrary
  PUBLIC
    nlohmann_json::nlohmann_json
    cpr::cpr
)

set_property(TARGET OpenAICppLibrary PROPERTY FOLDER "library")
