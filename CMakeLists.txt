set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(
    mailio
    GIT_REPOSITORY "https://github.com/karastojko/mailio"
)

FetchContent_MakeAvailable(mailio)

add_executable(test test.cpp)
target_include_directories(test PRIVATE ${mailio_SOURCE_DIR}/include ${mailio_BINARY_DIR})
target_link_libraries(test PRIVATE mailio)
