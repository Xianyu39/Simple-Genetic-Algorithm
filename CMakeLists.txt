project(GeneticAlgorithm)
cmake_minimum_required(VERSION 3.0)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(${PROJECT_SOURCE_DIR}/include)
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)

add_library(GA SHARED ${SRC})
target_include_directories(GA PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(Demo ${PROJECT_SOURCE_DIR}/Main.cpp)
target_link_libraries(Demo PUBLIC GA)