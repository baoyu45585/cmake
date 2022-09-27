# 声明要求的 cmake 最低版本
cmake_minimum_required( VERSION 2.8 )

# 声明一个 cmake 工程
project(HelloWorld)

include_directories(./include)

#生成共享库
#get the shared package
#here needs no .hpp
add_library(MyTest SHARED  src/MyTest.cpp)


#add_library( calculate_shared SHARED IMPORTED)
#set_target_properties( calculate_shared
#                       PROPERTIES IMPORTED_LOCATION
#                       ${PROJECT_SOURCE_DIR}/libs/libcalculate_shared.so)

# 生成可执行程序
# 语法：add_executable( 程序名 源代码文件 ）
add_executable(  main
                 src/main.cpp
                 src/test.cpp
              )

#连接共享库
target_link_libraries(  main
                        MyTest
                        #calculate_shared
                        ${PROJECT_SOURCE_DIR}/libs/libcalculate_shared.so
                     )