cmake_minimum_required(VERSION 3.20)
project(learnC_2)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(learnC_2_main main.c)
message( "====>>>> added exe, main folder")

add_subdirectory(palindrome)
add_subdirectory(dp)
add_subdirectory(linked_list)
add_subdirectory(sortings)
# add_subdirectory(tests)

target_link_libraries(learnC_2_main 
                            PUBLIC 
                            palindrome_lib 
                            dp_lib
                            link_list_lib
                            sort_lib
                            )

