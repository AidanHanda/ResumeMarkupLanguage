cmake_minimum_required(VERSION 3.1)
project (ResumeMarkupLanguage)
  
set(CMAKE_CXX_STANDARD 11)  # enable C++11 standard

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

include_directories("${PROJECT_SOURCE_DIR}")

include_directories(
  ${PROJECT_SOURCE_DIR}/include
  ${PROJECT_SOURCE_DIR}/src
)

file(GLOB all_SRCS
	"${PROJECT_SOURCE_DIR}/include/*.hpp"
  "${PROJECT_SOURCE_DIR}/src/*.cpp"
)

add_executable(ResumeMarkupLanguage ${all_SRCS})
target_link_libraries(${PROJECT_NAME}) 
