cmake_minimum_required (VERSION 3.30.5)
file (GLOB_RECURSE SOURCE_FILES "src/*.cpp")

project (
  whatsappdesktop
  VERSION "0.1.0"
  DESCRIPTION "description"
  LANGUAGES CXX
)

find_package(wxWidgets REQUIRED COMPONENTS core net base)

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/include 
  ${wxWidgets_INCLUDE_DIRS}
) 


add_executable (whatsappdesktop ${SOURCE_FILES})
