add_executable(
    cpr_test
    cpr_example.cpp)

target_link_libraries(
        cpr_test
    PUBLIC 
        cpr::cpr)