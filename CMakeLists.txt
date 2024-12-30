cmake_minimum_required (VERSION 3.30.5)
file (GLOB_RECURSE SOURCE_FILES "src/*.cpp")

project (
  webnative
  VERSION "0.1.0"
  DESCRIPTION "description"
  LANGUAGES CXX
)

find_package(Qt6 COMPONENTS Widgets WebEngineWidgets REQUIRED) 

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/include 
  Qt6::Widgets 
  Qt6::WebEngineWidgets
) 

add_executable (webnative ${SOURCE_FILES})

target_link_libraries(
  webnative PRIVATE 
  Qt6::Widgets 
  Qt6::WebEngineWidgets
)