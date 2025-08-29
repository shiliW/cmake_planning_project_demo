project(process)

# 生成动态库
add_library(${PROJECT_NAME}
  SHARED
  process.cpp
)

# 指定动态库的包含目录
target_include_directories(${PROJECT_NAME}
  PUBLIC
  ${PNC_Map_Dir}
)

# 链接动态库pnc_map
target_link_libraries(${PROJECT_NAME}
  PUBLIC
  pnc_map
)

target_link_libraries(${PROJECT_NAME}
  PUBLIC
  Eigen3::Eigen
)