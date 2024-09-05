cmake_minimum_required(VERSION 3.5)
# PROJECT DESCRIPTION AND META INFO

set(PROJECT_NAME
  "CMakeTemplate"
)
set(AUTHOR_DOMAIN
  "https://github.com/Sinnaminty/CMakeTemplate"
)
set(AUTHOR_MAINTAINER
  "aidenrivera7@gmail.com"
)
set(VERSION_MAJOR "0")
set(VERSION_MINOR "0")
set(VERSION_PATCH "1")
set(PROJECT_VERSION
  "${VERSION_MAJOR}.${VERSION_MINOR}.${VERSION_PATCH}"
)
set(PROJECT_DESCRIPTION "This is my cmake template!")
set(PROJECT_LANGUAGES "CXX")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# DECLARE PROJECT

project(${PROJECT_NAME})

include(CTest)

add_subdirectory(libs)
add_subdirectory(app)
