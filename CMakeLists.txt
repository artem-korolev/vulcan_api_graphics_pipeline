cmake_minimum_required(VERSION 3.10)

project(GraphicsPipelineLibrary)

set(CMAKE_C_STANDARD 99)

find_package(Vulkan REQUIRED)

add_executable(GraphicsPipelineLibrary main.c shader_stage.c pipeline_config.c graphics_pipeline.c utils.c)

target_include_directories(GraphicsPipelineLibrary PRIVATE ${Vulkan_INCLUDE_DIRS})
target_link_libraries(GraphicsPipelineLibrary PRIVATE ${Vulkan_LIBRARIES})