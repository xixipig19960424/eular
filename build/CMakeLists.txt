cmake_minimum_required(VERSION 2.8.0)

project(euler)

set(USR__ ${CMAKE_CURRENT_SOURCE_DIR}/usr)
set(BIN__ ${CMAKE_CURRENT_SOURCE_DIR}/usr/bin)
set(LIB__ ${CMAKE_CURRENT_SOURCE_DIR}/usr/lib)
set(INCLUDE__ ${CMAKE_CURRENT_SOURCE_DIR}/usr/include)

get_filename_component(USR_ "${USR__}" ABSOLUTE)
get_filename_component(BIN_ "${BIN__}" ABSOLUTE)
get_filename_component(LIB_ "${LIB__}" ABSOLUTE)
get_filename_component(INCLUDE_ "${INCLUDE__}" ABSOLUTE)

#message("Source directory: ${CMAKE_CURRENT_SOURCE_DIR}")
#message("Binary directory: ${CMAKE_CURRENT_BINARY_DIR}")
message("USR_: ${USR_}")
message("BIN_: ${BIN_}")
message("LIB_: ${LIB_}")
message("INCLUDE_: ${INCLUDE_}")

execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${USR_})
execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${BIN_})
execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${LIB_})
execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${INCLUDE_})

#set object
set(
    EXECUTABLES
    1
    2
)

#set common .h path
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../common/
)

foreach(EXECUTABLE ${EXECUTABLES})

#set .h path
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/../question/${EXECUTABLE}
)

#set .c file
aux_source_directory(
    ${CMAKE_CURRENT_SOURCE_DIR}/../question/${EXECUTABLE}
    src_list
)

#create
add_executable(${EXECUTABLE} ${src_list})

#install
install(
    TARGETS
    ${EXECUTABLE}
    DESTINATION
    ${BIN_}
)

set(src_list "")

endforeach()