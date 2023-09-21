add_library(solution STATIC)
target_sources(solution
    PRIVATE
    board.cpp
    field.cpp
    group.cpp
)
target_include_directories(solution
    INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
)
