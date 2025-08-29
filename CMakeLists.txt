cmake_minimum_required(VERSION 3.29.0)
project(planning
  VERSION 0.0.1
  DESCRIPTION "a demo for cmake planning project"
  HOMEPAGE_URL "https://github.com/shiliW/cmake_planning_project_demo"
  LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

# 变量和目录设置
# 设置动态库和可执行文件的输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# 设置变量：Process_Dir
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process) # CMAKE_SOURCE_DIR---根目录

# 设置变量：PNC_Map_Dir
set(PNC_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)

# 添加子目录 --- 子目录可继承变量
add_subdirectory(src)