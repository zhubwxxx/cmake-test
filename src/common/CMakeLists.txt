project(common)
aux_source_directory(. SRC_LIST_COMMON)
add_library(${PROJECT_NAME} ${SRC_LIST_COMMON})

