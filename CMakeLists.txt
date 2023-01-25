project(guizhong)

# Add main.cpp file of project root directory as source file
set(SOURCE_FILES main.cpp)

# Add executable target with source files listed in SOURCE_FILES variable
add_executable(guizhong ${SOURCE_FILES})

find_package(simpleble REQUIRED CONFIG)
target_link_libraries(guizhong simpleble::simpleble)