project(tests)
cmake_minimum_required(VERSION 2.8)
include_directories(${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/test
    ${PROJECT_SOURCE_DIR}/mock
    ${PROJECT_SOURCE_DIR}/src
    )

aux_source_directory(${PROJECT_SOURCE_DIR} SRC_LIST)
aux_source_directory(${PROJECT_SOURCE_DIR}/test SRC_LIST)
aux_source_directory(${PROJECT_SOURCE_DIR}/mock SRC_LIST)
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)


add_executable(${PROJECT_NAME} ${SRC_LIST})

target_link_libraries(${PROJECT_NAME}
    CppUTest
    CppUTestExt
  )

set(CMAKE_CXX_FLAGS "-g -Wall -static -fprofile-arcs -ftest-coverage")
#set(CPPUTEST_HOME "/home/kazufumi/workspace/cpputest")

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD COMMAND ${PROJECT_NAME})
