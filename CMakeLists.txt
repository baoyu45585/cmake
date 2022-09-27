# 声明要求的 cmake 最低版本
cmake_minimum_required( VERSION 2.8 )

# 声明一个 cmake 工程
project(HelloWorld)

#生成共享库
#get the shared package
#here needs no .hpp
add_library(calculate_shared SHARED  hello.cpp)


# 添加一个可执行程序
# 语法：add_executable( 程序名 源代码文件 ）
add_executable(HelloWorld main.cpp)

#连接共享库
target_link_libraries(HelloWorld calculate_shared)