cmake_minimum_required(VERSION 3.14.0)
set (CMAKE_CXX_STANDARD 20)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

project(sortmerge)

include_directories(        
         ${PROJECT_SOURCE_DIR}/modules
        ${PROJECT_SOURCE_DIR}/source       
       
)

link_directories(${PROJECT_SOURCE_DIR}/modules)

file(GLOB Lib_SRCS
        "${PROJECT_SOURCE_DIR}/modules/*.ixx"
        )

file(GLOB App_SRCS        
        "${PROJECT_SOURCE_DIR}/source/*.cpp"
        )
		
add_executable(RaceGame ${App_SRCS} "modules/sorter.ixx")