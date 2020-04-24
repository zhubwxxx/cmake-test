project(student)
aux_source_directory(. SRC_LIST_STUDENT)
add_library(${PROJECT_NAME} ${SRC_LIST_STUDENT})
target_link_libraries(${PROJECT_NAME} common)
