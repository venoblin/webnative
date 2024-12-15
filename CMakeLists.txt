cmake_minimum_required (VERSION 3.30.5)
file (GLOB_RECURSE SOURCE_FILES src/*.cpp)

project (
  whatsappdesktop
  VERSION 0.1.0
  DESCRIPTION description
  LANGUAGES CXX
)

add_executable (whatsappdesktop ${SOURCE_FILES})
