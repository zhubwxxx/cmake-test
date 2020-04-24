project(teacher)
aux_source_directory(. SRC_LIST_TEACHER)
add_library(${PROJECT_NAME} ${SRC_LIST_TEACHER})
target_link_libraries(${PROJECT_NAME} common)
