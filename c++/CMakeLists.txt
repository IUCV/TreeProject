cmake_minimum_required (VERSION 2.8.11)
project(ObjIdent)

list(APPEND CMAKE_MODULE_PATH
  ${PROJECT_SOURCE_DIR}/cmake
  $ENV{DEV_LIBS}/clany/cmake
)
include(Utilities)

# Compiler detection
find_compiler(
  GNU   4.7  "-std=c++11 -Wall -fno-operator-names"
  Clang 3.2  "-std=c++11 -Wall -Wno-overloaded-virtual -fno-operator-names"
  MSVC  2013 "/W4"
)

option(USE_MY_PATH "Use my own default library path" OFF)
if(USE_MY_PATH)
  add_default_lib_path($ENV{DEV_LIBS} $ENV{DEV_PLAT})
endif()

# Find Qt library
option(USE_QT4 OFF)

  find_package(Qt4 COMPONENTS QtCore QtGui REQUIRED)
  include(${QT_USE_FILE})
  set(Qt_LIBS ${QT_LIBRARIES})
  macro(WRAP_UI_FILE files)
    QT4_WRAP_UI(${ARGV})
  endmacro()
  set(USE_QT_VER 4)

#set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Set up project include directories
include_directories(${PROJECT_SOURCE_DIR}/include)
include_directories(${PROJECT_SOURCE_DIR}/3rdparty/include)
include_directories(${PROJECT_SOURCE_DIR}/3rdparty/OverFeat/src)
include_directories(${PROJECT_SOURCE_DIR}/3rdparty/OverFeat/src/tools)
include_directories(${PROJECT_BINARY_DIR})

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

FIND_PACKAGE( OpenMP REQUIRED)
if(OPENMP_FOUND)
#message("OPENMP FOUND")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${OpenMP_EXE_LINKER_FLAGS}")
endif()

FIND_PACKAGE(BLAS)
IF(BLAS_FOUND)
  SET(USE_BLAS 1)
ENDIF(BLAS_FOUND)

FIND_PACKAGE(LAPACK)
IF(LAPACK_FOUND)
  SET(USE_LAPACK 1)
ENDIF(LAPACK_FOUND)

find_package(FFTW REQUIRED)
include_directories(${FFTW_INCLUDES})

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

find_package(TBB REQUIRED)
include_directories(${TBB_INCLUDE_DIRS})
link_directories(${TBB_LIBRARY_DIRS} ../3rdparty/OverFeat/src/)

configure_file (
  "${PROJECT_SOURCE_DIR}/include/obj_ident_config.h.in"
  "${PROJECT_BINARY_DIR}/obj_ident_config.h"
)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})

add_subdirectory(src)
