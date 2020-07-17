cmake_minimum_required (VERSION 3.10)

project(Meshgen)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")


add_executable(${PROJECT_NAME} 
	src/main.cpp
	lib_utils/image_utility/image_utility.cpp
	lib_utils/basicPly/BasicPly.cpp
	lib_utils/utility/utility.cpp
)
find_package(Eigen3 REQUIRED)

include_directories(
	lib_utils
	include
	${EIGEN3_INCLUDE_DIR}
)

find_package(OpenCV REQUIRED)
if(OpenCV_FOUND)
  include_directories(
      ${OpenCV_INCLUDE_DIRS}
    )
  target_link_libraries(${PROJECT_NAME} 
    ${OpenCV_LIBS}
    )
endif(OpenCV_FOUND)