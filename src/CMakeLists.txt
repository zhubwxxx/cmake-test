project(src)

#添加问文件包含路径
include_directories(${PROJECT_SOURCE_DIR})

add_subdirectory(common)
add_subdirectory(student)
add_subdirectory(teacher)

aux_source_directory(. SRC_LIST)
add_executable(demo ${SRC_LIST})
target_link_libraries(demo student teacher)