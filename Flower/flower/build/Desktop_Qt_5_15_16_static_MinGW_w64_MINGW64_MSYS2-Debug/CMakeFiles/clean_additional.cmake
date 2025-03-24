# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\flower_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\flower_autogen.dir\\ParseCache.txt"
  "flower_autogen"
  )
endif()
